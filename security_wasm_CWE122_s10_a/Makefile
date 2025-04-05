APPLICATION = wasm-example
# If no BOARD is defined in the environment, use this default:
BOARD ?= native

# This has to be the absolute path to the RIOT base directory:
RIOTBASE ?= $(CURDIR)/../..

USEPKG += wamr 

#CFLAGS += -std=gnu11 
#CFLAGS += -D__STDC_NO_ATOMICS__=1 #GO
#CFLAGS += -Wno-error
#USEMODULE += xtimer
USEMODULE += xtimer
USEMODULE += random

ifeq (,$(filter native native64,$(BOARD)))
CFLAGS += -DTHREAD_STACKSIZE_MAIN='(6 * 1024)'
endif

export WAMR_CONFIG := $(abspath config.cmake)
BLOBS += $(wildcard *.wasm)
#BLOBS += gowon.wasm
#BLOBS += CWE121_Stack_Based_Buffer_Overflow__char_type_overrun_memcpy_01_good.wasm
#BLOBS += CWE121_Stack_Based_Buffer_Overflow__char_type_overrun_memcpy_01_bad.wasm
#BLOBS += CWE121_Stack_Based_Buffer_Overflow__CWE129_large_01_good.wasm
#BLOBS += CWE121_Stack_Based_Buffer_Overflow__CWE129_large_01_bad.wasm
#BLOBS += CWE122_Heap_Based_Buffer_Overflow__char_type_overrun_memcpy_01_good.wasm
#BLOBS += CWE122_Heap_Based_Buffer_Overflow__char_type_overrun_memcpy_01_bad.wasm



# Comment this out to disable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
DEVELHELP ?= 1

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 1
.PHONY: update-wamr

all: update-wamr $(BLOBS) 

#hello.wasm: wasm_sample/hello.c wasm_sample/Makefile
#	make -C wasm_sample hello.wasm
#	mv wasm_sample/hello.wasm .

#flac.wasm: wasm_sample/Makefile
#	make -C wasm_sample flac.wasm
#	mv wasm_sample/flac.wasm .

#flac.wasm: wasm_sample/Makefile
#	mv wasm_sample/flac.wasm .
#




#######################################################
# Load the rest of the usual RIOT make infrastructure #
#######################################################

include $(RIOTBASE)/Makefile.include
