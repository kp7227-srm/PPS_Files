#include <stdio.h>

int main(){

    int g1,g2,g3,c1,c2,c3,sgpa;
    printf("Enter the grades and credits for 3 subjects:\n");
    scanf("%d %d",&g1,&c1);
    scanf("%d %d",&g2,&c2);
    scanf("%d %d",&g3,&c3);

    sgpa = ((g1*c1)+(g2*c2)+(g3*c3))/(c1+c2+c3);
    switch (sgpa) {
        case 10:
        case 9:
            printf("Distinction");
            break;
        case 8:
        case 7:
            printf("First Class");
            break;
        case 6:
        case 5:
            printf("Average Performance.\n");
            break;
        case 4:
            printf("Pass, but needs improvement.\n");
            break;
        default:
            printf("Fail.\n");
            break;
    }

    return 0;
}