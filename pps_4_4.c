#include <stdio.h>

int main() {
    int num, sum, digit, temp;

    printf("Armstrong numbers from 1 to 1000 are:\n");
    for (num = 1; num <= 1000; num++) {
        sum = 0;
        temp = num;

        while (temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }
    return 0;
}
