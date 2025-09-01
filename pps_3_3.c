#include <stdio.h>

int main(){
    int a = 2, b = 3, c = 4, l;
    l = a>b?(a>c ? a : c):(b>c ? b : c);
    printf("Largest = %d \n", l);
    return 0;
}