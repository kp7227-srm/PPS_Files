#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int copy_arr[n];
    
    for(int i = 0; i < n; i++){

        copy_arr[i] = arr[n-1-i];
    }

    printf("This it the reversed array : [");
    for (int i = 0; i < n; i++) {
        printf("%d ", copy_arr[i]);
    }
    printf("]");
    printf("]");

    return 0;
}