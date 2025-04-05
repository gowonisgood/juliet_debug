#sometimes there might not be a wasm-ld (Ubuntu:focal)
#lets check if we can find a specific version

#this is a kind of crazy which from
#https://www.gnu.org/software/make/manual/html_node/Call-Function.html#Call-Function
#see https://github.com/RIOT-OS/RIOT/pull/16806 and /16807 and /16776 for why
search_fn = $(firstword $(wildcard $(addsuffix /$(1),$(subst :, ,$(PATH)))))

ifneq ($(call search_fn,wasm-ld),)
  WASM-LD ?= wasm-ld
  else
    ifneq ($(call search_fn,wasm-ld-11),)
    LLVM_VERSION := 11
    else
      ifneq ($(call search_fn,wasm-ld-10),)
      LLVM_VERSION := 10
      else
        ifneq ($(call search_fn,wasm-ld-9),)
        LLVM_VERSION := 9
        else
          ifneq ($(call search_fn,wasm-ld-8),)
          LLVM_VERSION := 8
          endif
      endif
    endif
  endif
endif

ifneq ($(LLVM_VERSION),)
  CLANG ?= clang-$(LLVM_VERSION)
  CLANGPP ?= clang++-$(LLVM_VERSION)
  WASM-LD ?= wasm-ld-$(LLVM_VERSION)
else
  CLANG ?= clang
  CLANGPP ?= clang++
endif

ifeq ($(WASM-LD),)
  WASM-LD ?= echo "!! NO wasm-ld(-VERSION) found !!"; false
  COPY_HELLO := YES
endif


#############GO##############
WASI_SDK_PATH := /home/gowonisgood/wasi-sdk-11.0
SYSROOT := $(WASI_SDK_PATH)/share/wasi-sysroot
CC := $(WASI_SDK_PATH)/bin/clang --target=wasm32-wasi --sysroot=$(SYSROOT)
LD := $(WASI_SDK_PATH)/bin/wasm-ld

#############GO##############



LINK_FLAGS := -z stack-size=4096 \
		--export main \
		--export=__heap_base \
		--export=__data_end \
		--allow-undefined \
		--strip-all \
		--export-dynamic \
		-error-limit=0 \
		--lto-O3 \
		-O3 \
		--gc-sections\
		--initial-memory=65536 \
		--no-entry \
		-L/home/gowonisgood/wasi-sdk-11.0/share/wasi-sysroot/lib/wasm32-wasi -lwasi-emulated-signal \
		#

# --initial-memory may only be set in 64kB steps (pagesize of WASM)
# even though this one page is 64kB
#	- data starts at 0, (1024 is chosen by lld)
#	- stack starts at 4kB growing down
#	- heap at 4kB growing up (see stack-size option)
#	-> memory can be smaller than first page
# without stack-size option stack will start at 64kB
#	-> heap needs a second page
# wasm-ld 8 and 11 do not need --initial-memory=64kB

COMPILE_FLAGS := -Wall \
		--target=wasm32-wasi \
		-emit-llvm \
		-Os \
		-flto \
		-fvisibility=hidden \
		-ffunction-sections \
		-fdata-sections \
		--sysroot=/home/gowonisgood/wasi-sdk-11.0/share/wasi-sysroot \
                -I/home/gowonisgood/wasi-sdk-11.0/share/wasi-sysroot/include/c++/v1 \
		-I/home/gowonisgood/wasi-sdk-11.0/share/wasi-sysroot/include \
		-Wno-error=unused-function \

#one might consider adding these
#		-nostartfiles \
#		--nostdlib \
#		--nostdinc \
#		-std=c++14 \

#%.show: %.wasm
#	wasm2wat $<

#%.wasm: %.o Makefile
#	$(WASM-LD) -o $@ $(LINK_FLAGS) $<


#%.o: %.cpp Makefile FORCE
#	$(CLANGPP) \
#		-c \
#		$(COMPILE_FLAGS) \
#		-o $@ \
#		$<

#%.o: %.c Makefile FORCE
#	$(CLANG)\
#		-c \
#		$(COMPILE_FLAGS) \
#		-o $@ \
#		$<

#%.wat: %.wasm Makefile
#	wasm2wat -o $@ $<

#hello.wasm:
#
#ifeq ($(COPY_HELLO),YES)
#hello.wasm: hello_prebuild.wasm
#	@echo "!! NO wasm-ld(-VERSION) found  !!"
#	@echo "!! copying hello_prebuild.wasm !! "
#	cp hello_prebuild.wasm hello.wasm
#else
#hello_prebuild.wasm: hello.wasm
#	cp hello.wasm hello_prebuild.wasm
#endif

#flac.wasm

FLAC_LIB_PATH := /home/gowonisgood/wasm_runtime_protection_2025/RIOT/examples/wasm/wasm_sample/libFLAC/.libs/libFLAC.so

flac.wasm: flac_sources
	$(CC) -v -O2 -I. -I./include -I./libFLAC/include \
          -DPACKAGE_VERSION=\"1.3.2\" -DFLAC__HAS_OGG=0 -DHAVE_LROUND=1 \
          analyze.c decode.c encode.c local_string_utils.c main.c utils.c vorbiscomment.c \
          ./libFLAC/format.c ./share/grabbag/snprintf.c ./share/grabbag/file.c \
          ./libFLAC/stream_decoder.c ./libFLAC/stream_encoder.c \
          ./share/replaygain_synthesis/replaygain_synthesis.c \
          ./share/grabbag/replaygain.c ./libFLAC/metadata_object.c \
          ./share/grabbag/cuesheet.c ./share/grabbag/seektable.c \
          ./share/getopt/getopt1.c ./share/getopt/getopt.c \
          ./share/grabbag/picture.c ./share/utf8/utf8.c \
          ./libFLAC/metadata_iterators.c ./libFLAC/bitreader.c \
          ./libFLAC/md5.c ./libFLAC/lpc.c ./libFLAC/cpu.c \
          ./libFLAC/crc.c ./libFLAC/memory.c ./libFLAC/fixed.c \
          ./libFLAC/minmax.c ./libFLAC/bitwriter.c \
          ./libFLAC/stream_encoder_framing.c ./libFLAC/window.c \
          ./share/replaygain_analysis/replaygain_analysis.c \
          ./share/utf8/charset.c ./libFLAC/chmodchown.c \
          -o flac.wasm  -lm \


flac_sources:
	@echo "Compiling FLAC sources..."



.PHONY: FORCE
