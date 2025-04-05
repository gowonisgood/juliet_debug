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
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_good.wasm.h"

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
    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_good_wasm, CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_01_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_02_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_03_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_04_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_05_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_06_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_07_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_08_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_09_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_10_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_11_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_12_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_13_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_14_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_15_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_16_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_17_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memcpy_18_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_01_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_02_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_03_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_04_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_05_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_06_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_07_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_08_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_09_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_10_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_11_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_12_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_13_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_14_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_15_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_16_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_17_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_good_wasm, CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__wchar_t_type_overrun_memmove_18_good);
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
