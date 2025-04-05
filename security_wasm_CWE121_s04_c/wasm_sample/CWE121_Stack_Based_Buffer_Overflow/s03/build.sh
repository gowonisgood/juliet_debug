#!/bin/bash

WASI_SDK_PATH=${WASI_SDK_PATH:-/home/gowonisgood/wasi-sdk/build/install}
CLANG="${WASI_SDK_PATH}/bin/clang"
WASM_LD="${WASI_SDK_PATH}/bin/wasm-ld"
SYSROOT="${WASI_SDK_PATH}/share/wasi-sysroot"

# 공통 컴파일 플래그 (C용)
CFLAGS="-Wall --target=wasm32-wasi -emit-llvm -O0 -flto -fvisibility=hidden -ffunction-sections -fdata-sections"
CFLAGS+=" --sysroot=${SYSROOT} -I${SYSROOT}/include"
CFLAGS+=" -Wno-error=unused-function -DINCLUDEMAIN=1"

# 링커 플래그
LDFLAGS="--no-entry --strip-all --export-dynamic --export=__heap_base --export=__data_end"
LDFLAGS+=" --allow-undefined --gc-sections --initial-memory=65536 -z stack-size=4096"
LDFLAGS+=" -L${SYSROOT}/lib/wasm32-wasi -lwasi-emulated-signal -O3 --lto-O3 --error-limit=0"

echo "Compiling local io.c for C benchmarks..."
${CLANG} ${CFLAGS} -c io.c -o io_c.o

wasm_count=0

# 그룹화 처리를 위한 배열 선언: 그룹화된 파일들과 단일 파일들
declare -A group_files
declare -a individual_files

# io.c를 제외한 모든 C 파일 분류
for file in *.c; do
    [ -e "$file" ] || continue
    if [ "$file" = "io.c" ]; then
        continue
    fi
    base="${file%.*}"
    # 파일명이 숫자 뒤에 단일 알파벳(a, b 등)로 끝나는 경우 그룹화 (예: ...51a, ...51b)
    if [[ "$base" =~ ^(.*[0-9])([a-zA-Z])$ ]]; then
        prefix="${BASH_REMATCH[1]}"
        group_files["$prefix"]+="$file "
    else
        individual_files+=("$file")
    fi
done

# 그룹화된 C 파일 처리 (2개 이상인 경우만 그룹 컴파일, 1개면 단일 파일로 처리)
for prefix in "${!group_files[@]}"; do
    # 그룹에 속한 파일들을 배열로 변환
    group=(${group_files["$prefix"]})
    if [ ${#group[@]} -gt 1 ]; then
        echo "========================================="
        echo "Processing grouped C benchmarks with prefix: $prefix"
        
        # --- bad 모드 컴파일 및 링크 (OMITGOOD) ---
        bad_objs=()
        for src in "${group[@]}"; do
            base="${src%.*}"
            obj="${base}_bad.o"
            echo "Compiling (bad mode): $src -> $obj"
            ${CLANG} ${CFLAGS} -DOMITGOOD=1 -c "$src" -o "$obj"
            if [ $? -eq 0 ]; then
                bad_objs+=("$obj")
            else
                echo "Compilation failed for $src in bad mode."
            fi
        done
        if [ ${#bad_objs[@]} -gt 0 ]; then
            out="${prefix}_bad.wasm"
            echo "Linking grouped (bad mode) -> $out"
            ${WASM_LD} --verbose ${LDFLAGS} -o "$out" "${bad_objs[@]}" io_c.o
            ((wasm_count++))
            cp "$out" ../../..
        fi

        # --- good 모드 컴파일 및 링크 (OMITBAD) ---
        good_objs=()
        for src in "${group[@]}"; do
            base="${src%.*}"
            obj="${base}_good.o"
            echo "Compiling (good mode): $src -> $obj"
            ${CLANG} ${CFLAGS} -DOMITBAD=1 -c "$src" -o "$obj"
            if [ $? -eq 0 ]; then
                good_objs+=("$obj")
            else
                echo "Compilation failed for $src in good mode."
            fi
        done
        if [ ${#good_objs[@]} -gt 0 ]; then
            out="${prefix}_good.wasm"
            echo "Linking grouped (good mode) -> $out"
            ${WASM_LD} --verbose ${LDFLAGS} -o "$out" "${good_objs[@]}" io_c.o
            ((wasm_count++))
            cp "$out" ../../..
        fi
    else
        # 그룹에 단일 파일만 포함되었다면 개별 파일로 처리
        individual_files+=("${group[0]}")
    fi
done

# 단일 C 파일 처리
for file in "${individual_files[@]}"; do
    echo "-----------------------------------------"
    echo "Processing standalone C benchmark file: $file"
    base="${file%.*}"

    # bad 모드 컴파일 및 링크
    echo "Compiling (bad mode)..."
    ${CLANG} ${CFLAGS} -DOMITGOOD=1 -c "$file" -o "${base}_bad.o"
    if [ $? -eq 0 ]; then
        echo "Linking (bad mode)..."
        ${WASM_LD} --verbose ${LDFLAGS} -o "${base}_bad.wasm" "${base}_bad.o" io_c.o
        ((wasm_count++))
        cp "${base}_bad.wasm" ../../..
    else
        echo "Compilation failed (bad mode): $file"
    fi

    # good 모드 컴파일 및 링크
    echo "Compiling (good mode)..."
    ${CLANG} ${CFLAGS} -DOMITBAD=1 -c "$file" -o "${base}_good.o"
    if [ $? -eq 0 ]; then
        echo "Linking (good mode)..."
        ${WASM_LD} --verbose ${LDFLAGS} -o "${base}_good.wasm" "${base}_good.o" io_c.o
        ((wasm_count++))
        cp "${base}_good.wasm" ../../..
    else
        echo "Compilation failed (good mode): $file"
    fi
done

echo "========================================="
echo "✅ Total compiled and linked .wasm files: $wasm_count"
