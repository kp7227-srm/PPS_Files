#include <stdio.h>

int main() {
    int n,sum = 0,Nsum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    Nsum = n*(n-1)/2;
    int duplicate = sum - Nsum ;
    printf("The singular duplicate value in the given array is : %d",duplicate);
    return 0;
    
}