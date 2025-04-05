#!/usr/bin/env bash

# 스크립트 실행 방법:
# 1) 이 스크립트를 예: remove_commented_wasm.sh 라고 저장
# 2) chmod +x remove_commented_wasm.sh 로 실행 권한 부여
# 3) ./remove_commented_wasm.sh 로 실행

for dir in */; do
    [ -d "$dir" ] || continue
    wasm_main="${dir}wasm-main.c"
    if [ -f "$wasm_main" ]; then
        echo "=== 디렉터리: $dir ==="
        
        # wasm-main.c 파일에서 주석 처리된 라인에서 *_wasm 패턴 추출
        grep -E '^[[:space:]]*//' "$wasm_main" \
            | grep -o '[A-Za-z0-9_]\+_wasm' \
            | sort -u \
            | while read -r symbol; do
                # 예: symbol="CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_memmove_09_bad_wasm"
                # .wasm 파일명 생성: 심볼에서 _wasm 제거 후 ".wasm" 추가
                wasm_file="${symbol%_wasm}.wasm"
                # include 헤더 파일명 생성: 심볼에서 _wasm 제거 후 ".wasm.h" 추가
                header_file="${symbol%_wasm}.wasm.h"
                
                # .wasm 파일이 존재하면 삭제
                if [ -f "${dir}${wasm_file}" ]; then
                    echo "삭제: ${dir}${wasm_file}"
                    rm "${dir}${wasm_file}"
                fi

                # wasm-main.c 파일 내에 해당 header include 라인이 존재하면 삭제
                # include 라인은 보통 '#include "blob/<header_file>"' 형태임
                if grep -q "#include *\"blob/${header_file}\"" "$wasm_main"; then
                    echo "include 삭제: ${header_file} in ${wasm_main}"
                    sed -i.bak "/#include *\"blob\/${header_file}\"/d" "$wasm_main"
                fi
            done
    fi
done

