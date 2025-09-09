#include <stdio.h>

int main(){

    int g1,g2,g3,c1,c2,c3;
    float sgpa;
    printf("Enter the grades and credits for 3 subjects:\n");
    scanf("%d %d",&g1,&c1);
    scanf("%d %d",&g2,&c2);
    scanf("%d %d",&g3,&c3);

    sgpa = ((g1*c1)+(g2*c2)+(g3*c3))/(c1+c2+c3);
    if (sgpa >= 8) {
        printf("Distinction");
    } else if (sgpa >= 7) {
        printf("First class");
    } else if (sgpa >= 6) {
        printf("Second class");
    } else if (sgpa >= 5) {
        printf("Third class");
    } else if(sgpa < 5) {
        printf("Not qualified");
    } else {
        printf("Error");
    }    
    return 0;
}