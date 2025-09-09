#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
