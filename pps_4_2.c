#include <stdio.h>

int main(){

    // 1)
    int i,j, num = 1;
    for (i = 1; i <= 5; i++){
        for(j = 1;j <= i; j++){
            printf("%d ",num++);
        }
        printf("\n");
    }
    
    int n = 4;

    for (i = 1; i <= n; i++) {
        // print spaces
        for (j = 1; j <= n - i; j++)
            printf("  ");

        // left side (increasing)
        num = i;
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num += 3;
        }

        // right side (decreasing)
        num -= 6; 
        for (j = 1; j < i; j++) {
            printf("%d ", num);
            num -= 3;
        }

        printf("\n");
    }




    return 0;
}