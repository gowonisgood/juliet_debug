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
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_53_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_good.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_bad.wasm.h"
#include "blob/CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_good.wasm.h"

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












































































































































































































































































































     /* GO : 여기까지 a*/









































































































































   











































































































































    








































/* GO: 여기까지 b*/

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_53_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_53_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_53_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_53_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_53_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_53_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_53_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_53_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_54_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_63_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_64_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_65_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_66_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_67_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE131_memmove_68_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();













































































    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_01_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_02_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_03_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_04_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_05_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_06_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_07_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_08_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_09_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_10_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_11_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_12_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_13_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_14_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_15_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_16_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_17_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_18_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_31_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_32_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_34_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_41_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_44_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_45_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_51_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_52_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_53_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_54_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_63_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_64_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_65_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_66_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_67_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_bad
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_bad = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_bad[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_bad_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_bad_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_bad, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_good (good module)
    printf("iwasm_initilised_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_good = 0;
    const char *app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_good[] = {""};
    ret = wamr_run_cp(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_good_wasm, CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_good_wasm_len, app_argc_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_good, app_argv_CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_cpy_68_good);
    printf("ret = %d\n", ret);
    good_case++;
    if(ret == -1) {
         false_negative++;
         printf("error: false negative occured \n");
         return -1;
    }
    if(ret == -2) {
         except_case++;
         good_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    total_case =  good_case + bad_case;
    printf("false_negative:%d\ngood_case:%d\nbad_case:%d\nbad_catch:%d\ntotal_case:%d\nexcept_case:%d\n",false_negative,good_case,bad_case,bad_catch,total_case,except_case);
    return 0;
}
