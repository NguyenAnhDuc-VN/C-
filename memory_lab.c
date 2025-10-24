#include <stdio.h>

void recursive_function(int depth) {
    if (depth > 1000) return; // điều kiện dừng
    printf("Current recursion depth: %d\n", depth);
    recursive_function(depth + 1);
}

int main() {
    recursive_function(1);
    return 0;
}
https://github.com/<NguyenAnhDuc-Vn>/stack-overflow-lab.git
