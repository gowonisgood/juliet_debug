# #!/bin/bash
# # WASI SDK 환경변수 (기본 경로는 사용자의 환경에 맞게 조정)
# WASI_SDK_PATH=${WASI_SDK_PATH:-/home/gowonisgood/wasi-sdk/build/install}
# CLANG="${WASI_SDK_PATH}/bin/clang"
# CLANG_CPP="${WASI_SDK_PATH}/bin/clang++"
# WASM_LD="${WASI_SDK_PATH}/bin/wasm-ld"
# SYSROOT="${WASI_SDK_PATH}/share/wasi-sysroot"

# # 공통 컴파일 플래그
# CFLAGS="-Wall --target=wasm32-wasi -emit-llvm -Os -flto -fvisibility=hidden -ffunction-sections -fdata-sections"
# CFLAGS+=" --sysroot=${SYSROOT} -I${SYSROOT}/include/c++/v1 -I${SYSROOT}/include -I${PWD}"
# CFLAGS+=" -Wno-error=unused-function -DINCLUDEMAIN=1"

# # 링커 플래그
# LDFLAGS="--no-entry --strip-all --export-dynamic --export=__heap_base --export=__data_end"
# LDFLAGS+=" --allow-undefined --gc-sections --initial-memory=65536 -z stack-size=4096"
# LDFLAGS+=" -L${SYSROOT}/lib/wasm32-wasi -lwasi-emulated-signal -O3 --lto-O3 --error-limit=0"

# # 공용 io.c 파일을 각 모드에 맞게 미리 컴파일 (io.c, std_testcase.h, std_testcase_io.h 는 현재 디렉터리에 있음)
# echo "Compiling io.c for bad mode..."
# ${CLANG} $CFLAGS -DOMITGOOD=1 -c io.c -o io_bad.o

# echo "Compiling io.c for good mode..."
# ${CLANG} $CFLAGS -DOMITBAD=1 -c io.c -o io_good.o

# # 현재 디렉터리의 모든 하위 디렉터리(.c, .cpp 확장자 파일) 검색
# find . -mindepth 2 -type f \( -name "*.c" -o -name "*.cpp" \) | while IFS= read -r file; do
#     base=$(basename "$file")
#     name="${base%.*}"  # 확장자 제거; (주의: 서로 다른 디렉터리에서 같은 이름의 파일이 있으면 이름 충돌이 발생할 수 있음)

#     # 확장자에 따라 C와 C++ 컴파일러 선택
#     ext="${file##*.}"
#     if [ "$ext" = "cpp" ]; then
#          COMPILER="${CLANG_CPP}"
#     else
#          COMPILER="${CLANG}"
#     fi

#     echo "-----------------------------------------"
#     echo "Processing benchmark file: $file"

#     # bad 모드 컴파일 및 링크
#     echo "Compiling (bad mode)..."
#     ${COMPILER} $CFLAGS -DOMITGOOD=1 -c "$file" -o "${name}_bad.o"

#     echo "Linking (bad mode)..."
#     ${WASM_LD} --verbose ${LDFLAGS} -o "${name}_bad.wasm" "${name}_bad.o" io_bad.o

#     # good 모드 컴파일 및 링크
#     echo "Compiling (good mode)..."
#     ${COMPILER} $CFLAGS -DOMITBAD=1 -c "$file" -o "${name}_good.o"

#     echo "Linking (good mode)..."
#     ${WASM_LD} --verbose ${LDFLAGS} -o "${name}_good.wasm" "${name}_good.o" io_good.o

# done



# #!/bin/bash
# # WASI SDK 환경변수 (필요에 따라 경로 조정)
# WASI_SDK_PATH=${WASI_SDK_PATH:-/home/gowonisgood/wasi-sdk/build/install}
# CLANG="${WASI_SDK_PATH}/bin/clang"
# CLANG_CPP="${WASI_SDK_PATH}/bin/clang++"
# WASM_LD="${WASI_SDK_PATH}/bin/wasm-ld"
# SYSROOT="${WASI_SDK_PATH}/share/wasi-sysroot"

# # 공통 컴파일 플래그 (C용)
# CFLAGS="-Wall --target=wasm32-wasi -emit-llvm -Os -flto -fvisibility=hidden -ffunction-sections -fdata-sections"
# CFLAGS+=" --sysroot=${SYSROOT} -I${SYSROOT}/include/c++/v1 -I${SYSROOT}/include -I${PWD}"
# CFLAGS+=" -Wno-error=unused-function -DINCLUDEMAIN=1"

# # C++용 플래그 (C플래그와 동일)
# CPPCFLAGS="${CFLAGS}"

# # 링커 플래그
# LDFLAGS="--no-entry --strip-all --export-dynamic --export=__heap_base --export=__data_end"
# LDFLAGS+=" --allow-undefined --gc-sections --initial-memory=65536 -z stack-size=4096"
# LDFLAGS+=" -L${SYSROOT}/lib/wasm32-wasi -lwasi-emulated-signal -O3 --lto-O3 --error-limit=0"

# # 최상위 디렉터리에 있는 io.c를
# # 1. C 컴파일러로 컴파일하여 C 벤치마크용 오브젝트 생성 (io_bad.o, io_good.o)
# if [ -f io.c ]; then
#     echo "Compiling io.c for C benchmarks (using clang)..."
#     ${CLANG} $CFLAGS -DOMITGOOD=1 -c io.c -o io_bad.o
#     ${CLANG} $CFLAGS -DOMITBAD=1 -c io.c -o io_good.o
# else
#     echo "io.c not found for C benchmarks."
# fi

# # 2. C++ 컴파일러로 컴파일하여 C++ 벤치마크용 오브젝트 생성 (io_bad_cpp.o, io_good_cpp.o)
# if [ -f io.c ]; then
#     echo "Compiling io.c for C++ benchmarks (using clang++)..."
#     ${CLANG_CPP} $CPPCFLAGS -DOMITGOOD=1 -c io.c -o io_bad_cpp.o
#     ${CLANG_CPP} $CPPCFLAGS -DOMITBAD=1 -c io.c -o io_good_cpp.o
# else
#     echo "io.c not found for C++ benchmarks."
# fi

# # 모든 하위 디렉터리의 .c, .cpp 파일 처리 (벤치마크 소스)
# find . -mindepth 2 -type f \( -name "*.c" -o -name "*.cpp" \) | while IFS= read -r file; do
#     base=$(basename "$file")
#     name="${base%.*}"  # 확장자 제거 (동일 이름 파일이 여러 디렉터리에 있을 경우 주의)

#     # 확장자에 따라 C와 C++ 컴파일러 및 플래그, 그리고 링킹 시 사용할 io 오브젝트 선택
#     ext="${file##*.}"
#     if [ "$ext" = "cpp" ]; then
#          COMPILER="${CLANG_CPP}"
#          FLAGS="${CPPCFLAGS}"
#          IO_BAD="io_bad_cpp.o"
#          IO_GOOD="io_good_cpp.o"
#     else
#          COMPILER="${CLANG}"
#          FLAGS="${CFLAGS}"
#          IO_BAD="io_bad.o"
#          IO_GOOD="io_good.o"
#     fi

#     echo "-----------------------------------------"
#     echo "Processing benchmark file: $file"

#     # bad 모드 컴파일 및 링킹
#     echo "Compiling (bad mode)..."
#     ${COMPILER} $FLAGS -DOMITGOOD=1 -DprintLine\(x\)=puts\(x\) -c "$file" -o "${name}_bad.o"
#     if [ $? -ne 0 ]; then
#         echo "Compilation failed for bad mode: $file"
#     else
#         echo "Linking (bad mode)..."
#         ${WASM_LD} --verbose ${LDFLAGS} -o "${name}_bad.wasm" "${name}_bad.o" $IO_BAD
#     fi

#     # good 모드 컴파일 및 링킹
#     echo "Compiling (good mode)..."
#     ${COMPILER} $FLAGS -DOMITBAD=1 -DprintLine\(x\)=puts\(x\) -c "$file" -o "${name}_good.o"
#     if [ $? -ne 0 ]; then
#         echo "Compilation failed for good mode: $file"
#     else
#         echo "Linking (good mode)..."
#         ${WASM_LD} --verbose ${LDFLAGS} -o "${name}_good.wasm" "${name}_good.o" $IO_GOOD
#     fi

# done

#!/bin/bash
# 최상위 compile_all.sh
# s01 ~ s11 (또는 s0* 패턴에 해당하는 모든 디렉터리)를 순회하며 각 디렉터리의 build.sh를 실행합니다.

for dir in s0*; do
    if [ -d "$dir" ]; then
        echo "========================================="
        echo "Entering directory: $dir"
        (cd "$dir" && ./build.sh)
        echo "Leaving directory: $dir"
    fi
done

