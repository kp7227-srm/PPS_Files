#include <stdio.h>

void printBinary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    // i)
    int Num = 15, n = 3;
    int result1 = (Num >> n) & 1;
    printf("i) (Num >> n) & 1 = %d (binary: ", result1);
    printBinary(result1);
    printf(")\n");

    // ii)
    int a = 2, b = 3, c = 4;
    int d = a & b | c ^ a;
    printf("ii) d = a & b | c ^ a = %d (binary: ", d);
    printBinary(d);
    printf(")\n");

    // iii)
    int x = 12;
    int y = x << 4 & 5;
    printf("iii) y = x << 4 & 5 = %d (binary: ", y);
    printBinary(y);
    printf(")\n");

    return 0;
}
