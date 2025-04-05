#!/bin/bash
// # 이 스크립트는 모든 하위 디렉터리에서 srand, time, exit() 함수를 사용하는 파일을 찾아
# 해당 함수 호출이 있는 라인에만 주석("//")를 추가합니다.
# 다른 부분은 변경하지 않습니다.

# 함수 호출이 있는 파일 목록 찾기
files=$(find . -type f -exec grep -lE 'srand\s*\(|time\s*\(|exit\s*\(' {} \;)

for file in $files; do
    echo "Processing file: $file"
    # 주석이 이미 없는 라인 중, srand, time, exit 중 하나라도 포함된 라인 앞에 "// "를 추가
    sed -i -E '/^[[:space:]]*[^\/].*(srand\s*\(|time\s*\(|exit\s*\()/ s/^([[:space:]]*)/\1\/\/ /' "$file"
done

