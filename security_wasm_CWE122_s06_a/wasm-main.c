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
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_good.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_bad.wasm.h"
#include "blob/CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_good.wasm.h"

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
    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_22_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_51_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_52_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_53_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_54_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_61_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_63_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_64_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_65_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_66_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_67_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_68_good);
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














































































    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_01_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_02_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_03_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_04_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_05_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_06_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_07_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_08_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_09_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_10_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_11_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_12_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_13_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_14_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_15_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_16_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_17_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_18_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_21_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_22_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_31_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_32_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_34_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_41_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_42_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_44_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_45_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_51_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_52_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_53_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_54_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_61_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_63_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_64_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_65_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_66_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_67_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fscanf_68_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_01_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_02_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_03_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_04_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_05_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_06_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_07_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_08_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_09_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_10_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_11_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_12_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_13_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_14_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_15_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_16_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_17_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_18_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_21_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_31_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_32_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_34_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_41_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_42_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_44_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_45_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_51_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_52_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_53_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_54_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_61_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_63_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_64_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_65_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_66_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_67_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_68_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_22_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_51_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_52_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_53_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_54_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_61_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_63_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_64_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_65_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_66_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_67_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_listen_socket_68_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_01_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_02_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_03_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_04_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_05_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_06_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_07_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_08_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_09_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_10_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_11_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_12_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_13_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_14_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_15_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_16_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_17_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_18_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_21_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_22_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_31_good);
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

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_bad
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_bad: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_bad = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_bad[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_bad_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_bad_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_bad, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_bad);
    printf("ret = %d\n", ret);
    bad_case++;
    if(ret == -2) {
         except_case++;
         bad_case--;
         printf("except_case incremented, current value: %d\n", except_case);
    }
    iwasm_runtime_destroy();

    // Test for CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_good (good module)
    printf("iwasm_initilised_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_good: %s\n", telltruth(iwasm_runtime_init()));
    int app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_good = 0;
    const char *app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_good[] = {""};
    ret = wamr_run_cp(CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_good_wasm, CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_good_wasm_len, app_argc_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_good, app_argv_CWE122_Heap_Based_Buffer_Overflow__c_CWE129_rand_32_good);
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





























































































































































































































































































































































































































    total_case =  good_case + bad_case;
    printf("false_negative:%d\ngood_case:%d\nbad_case:%d\nbad_catch:%d\ntotal_case:%d\nexcept_case:%d\n",false_negative,good_case,bad_case,bad_catch,total_case,except_case);
    return 0;
}
