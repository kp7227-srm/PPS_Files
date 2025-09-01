#include <stdio.h>

int main () {
    //1
    float d = 1.5, D = 2.5; 
    printf("%d %d",d++ + ++D);
    printf("\nd = %d D = %d",d,D); 

    //2
    char c = 'A', C = 'a'; 
    printf("",c++ * ++C);
    printf("\n c = %c C = %c",c,C);
    
    //3
    char ch = '0';          
    printf("",ch-- + --ch); 
    printf("\n ch = %c \n",ch);

    /*

    //4
    char ch = '1'++; 
    printf("",ch);
    printf("\n ch = %c",ch);

    //5
    int a = 11 ++; 
    printf("a = %d",a); 

    */

    //6
    int i=19, j=29, k= 0;     
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++; 
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("k = %d\n", k);


    return 0;
}