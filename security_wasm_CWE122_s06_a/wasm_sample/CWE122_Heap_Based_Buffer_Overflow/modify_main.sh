#!/bin/bash
# 이 스크립트는 모든 하위 디렉터리에서 "int main"이 포함된 파일을 찾아서
# 1. "int main" 바로 위에 아래 매크로 정의 블록을 삽입하고,
# 2. "int main"이 있는 줄에 "WASM_EXPORT"를 그 바로 앞에 추가합니다.
#
# 매크로 정의 블록:
# #ifdef __cplusplus
# #define WASM_EXPORT __attribute__((visibility("default"))) extern "C"
# #else
# #define WASM_EXPORT __attribute__((visibility("default")))
# #endif
#
# 중요: 오직 "int main"이 있을 때만 해당 내용을 추가하며, 다른 내용은 변경하지 않습니다.

# "int main"이 포함된 파일 목록을 찾은 후 처리
find . -type f -exec grep -l "int main" {} \; | while IFS= read -r file; do
    echo "Processing file: $file"
    # 1. "int main"이 있는 줄 바로 위에 매크로 정의 블록을 삽입
    sed -i '/^[[:space:]]*int main/ i\
#ifdef __cplusplus\
#define WASM_EXPORT __attribute__((visibility("default"))) extern "C"\
#else\
#define WASM_EXPORT __attribute__((visibility("default")))\
#endif' "$file"
    
    # 2. "int main"이 있는 줄의 시작 부분에 WASM_EXPORT를 추가 (들여쓰기는 유지)
    sed -i 's/^\(\s*\)int main/\1WASM_EXPORT int main/' "$file"
done

