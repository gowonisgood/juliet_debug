#!/usr/bin/env bash

# 이 스크립트는 모든 직속 하위 디렉터리를 순회하며,
# 각 디렉터리 내의 wasm-main.c 파일에서 테스트 블록을 검사합니다.
# 테스트 블록은 “Test for”가 포함된 주석으로 시작하여,
# “iwasm_runtime_destroy();”가 포함된 줄에서 끝납니다.
# 블록의 모든 줄이 주석(//)으로 되어 있으면 해당 블록을 파일에서 삭제합니다.

for dir in */; do
    [ -d "$dir" ] || continue
    file="${dir}wasm-main.c"
    if [ -f "$file" ]; then
        echo "Processing ${file} ..."
        awk '
        BEGIN {
            in_block = 0;    # 블록 내 여부
            block = "";      # 블록 내용 누적
            block_all = 1;   # 블록의 모든 줄이 주석인지 여부 (1: 모두 주석)
        }
        {
            # 블록 시작: “Test for”를 포함하고 해당 줄이 주석이면 시작
            if (!in_block && $0 ~ /Test for/ && $0 ~ /^[[:space:]]*\/\//) {
                in_block = 1;
                block = $0 "\n";
                block_all = 1;
                next;
            }
            # 블록 내에서는 누적
            if (in_block) {
                block = block $0 "\n";
                if ($0 !~ /^[[:space:]]*\/\//) {
                    block_all = 0;
                }
                # 블록 종료 조건: iwasm_runtime_destroy(); 포함
                if ($0 ~ /iwasm_runtime_destroy\(\);/) {
                    if (block_all == 1) {
                        # 블록의 모든 줄이 주석이면 삭제(출력하지 않음)
                        in_block = 0;
                        block = "";
                        next;
                    } else {
                        # 일부 활성 코드가 있으면 블록 그대로 출력
                        printf "%s", block;
                        in_block = 0;
                        block = "";
                        next;
                    }
                }
                next;
            }
            # 블록 외의 일반 줄은 그대로 출력
            print $0;
        }
        END {
            # 파일 끝에 도달한 상태에서 블록 내였으나 활성 코드가 있었으면 출력
            if (in_block && block_all == 0) {
                printf "%s", block;
            }
        }
        ' "$file" > "$file.tmp" && mv "$file.tmp" "$file"
    fi
done

