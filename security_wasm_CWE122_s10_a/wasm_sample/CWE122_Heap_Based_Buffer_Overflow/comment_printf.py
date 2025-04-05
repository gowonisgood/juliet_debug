import os
import re

def comment_out_printfs(root_dir):
    for dirpath, _, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename.endswith(".c"):
                filepath = os.path.join(dirpath, filename)
                with open(filepath, "r", encoding="utf-8") as f:
                    lines = f.readlines()

                modified = False
                new_lines = []
                for line in lines:
                    if "printf" in line and not line.strip().startswith("//"):
                        # 주석 처리된 printf는 건너뜀
                        # 이미 주석처리된 경우 제외하고 처리
                        line = re.sub(r'(.*)(printf\s*\(.*?\)\s*;)', r'//\2', line)
                        modified = True
                    new_lines.append(line)

                if modified:
                    with open(filepath, "w", encoding="utf-8") as f:
                        f.writelines(new_lines)
                    print(f"[+] Modified: {filepath}")

if __name__ == "__main__":
    current_dir = os.getcwd()
    comment_out_printfs(current_dir)

