#!/bin/bash
# update_wasm_main.sh
# 이 스크립트는 wasm-main.c 파일이 없거나 빈 파일이면
# 필요한 기본 스켈레톤 내용을 생성한 후,
# 현재 디렉터리에 있는 모든 *.wasm 파일 이름을 참고하여,
# 1) "파일이름.wasm.h" 형태의 include 구문을 "/*provide some test program*/" 주석 바로 아래에 삽입하고,
# 2) 각 모듈에 대한 테스트 코드를 main() 함수 내 "return 0;" 바로 전에 삽입합니다.
# 3) 전역변수 except_case를 선언하고, 모든 ret에 대해 ret이 -2이면 except_case를 증가시키며 출력하는 로직을 추가합니다.
#    good 모듈은 ret이 -1인 경우와 -2인 경우 모두 검사하며,
#    bad 모듈은 ret이 -2인 경우만 검사합니다.
# 4) printf("except_case:%d\n",except_case); 가 main() 내에서 return 0; 바로 전에 위치하도록 합니다.

wasm_file="wasm-main.c"

# --- 0. wasm-main.c 파일이 없거나 빈 경우 스켈레톤 생성 ---
if [ ! -s "$wasm_file" ]; then
cat > "$wasm_file" << 'EOF'
/*
 * Copyright (C) 2020 TU Bergakademie Freiberg Karl Fessel
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

/*provide some test program*/

bool iwasm_runtime_init(void);
void iwasm_runtime_destroy(void);

/* wamr_run is a very direct interpretation of "i like to have a wamr_run" */
int wamr_run(void *bytecode, size_t bytecode_len, int argc, char **argv);

/* wamr_run_cp creates a copy bytecode and argv
 * if argc is 0 it is set to 1 and argv[0] is set to ""
 * to create some space for a return value */
int wamr_run_cp(const void *bytecode, size_t bytecode_len, int argc, const char **argv);

// 불리언 값을 문자열로 변환하는 매크로
#define telltruth(X) ((X) ? "true" : "false")

extern int bad_catch;

int main(void)
{
    int ret;
    int except_case = 0;
    int good_case = 0;
    int bad_case = 0;
    int total_case = 0;
    int false_negative = 0;
    return 0;
}
EOF
    echo "빈 wasm-main.c 파일에 스켈레톤을 생성하였습니다."
fi

# --- 1. include 구문 생성 및 삽입 ---
includes_tmp=$(mktemp)
for wasm in *.wasm; do
    [ -e "$wasm" ] || continue  # *.wasm 파일이 없으면 건너뜁니다.
    # 예: example.wasm → "blob/example.wasm.h"
    echo "#include \"blob/${wasm}.h\"" >> "$includes_tmp"
done

# "/*provide some test program*/" 다음 줄에 include 구문을 삽입합니다.
sed -i.bak '/\/\*provide some test program\*\//r '"$includes_tmp" "$wasm_file"

# --- 2. 테스트 코드 생성 ---
test_tmp=$(mktemp)
for wasm in *.wasm; do
    [ -e "$wasm" ] || continue
    base=$(basename "$wasm" .wasm)
    if [[ "$wasm" == *good* ]]; then
        cat >> "$test_tmp" << EOF
    // Test for ${base} (good module)
    printf("iwasm_initilised_${base}: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_${base} = 0;
    const char *app_argv_${base}[] = {""};
    ret = wamr_run_cp(${base}_wasm, ${base}_wasm_len, app_argc_${base}, app_argv_${base});
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         //return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

EOF
    else
        cat >> "$test_tmp" << EOF
    // Test for ${base}
    printf("iwasm_initilised_${base}: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_${base} = 0;
    const char *app_argv_${base}[] = {""};
    ret = wamr_run_cp(${base}_wasm, ${base}_wasm_len, app_argc_${base}, app_argv_${base});
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

EOF
    fi
done

# --- 3. main() 내부에 테스트 코드를 삽입 및
#     printf("except_case:%d\n",except_case); 를 return 0; 바로 전에 추가 ---
awk -v test_file="$test_tmp" '
    BEGIN {
        while ((getline line < test_file) > 0) {
            test_lines = test_lines line "\n"
        }
        close(test_file)
    }
    /return 0;/ {
        # 먼저 테스트 코드 삽입
        printf "%s", test_lines
        # 그리고 바로 그 앞에 except_case 값을 출력하는 printf 삽입
        printf "    total_case =  good_case + bad_case;\n"
        printf "    printf(\"false_negative:%%d\\ngood_case:%%d\\nbad_case:%%d\\nbad_catch:%%d\\ntotal_case:%%d\\nexcept_case:%%d\\n\",false_negative,good_case,bad_case,bad_catch,total_case,except_case);\n"
    }
    { print }
' "$wasm_file" > "${wasm_file}.new"

mv "${wasm_file}.new" "$wasm_file"

# 임시 파일 삭제
rm "$includes_tmp" "$test_tmp"

echo "wasm-main.c 파일이 업데이트되었습니다."

