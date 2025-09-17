#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Invalid Input: Array size must be at least 2.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1, max2;

    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (int i = 2; i < n; i++) {

        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
    
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("\nThe maximum element is: %d\n", max1);
    printf("The second maximum element is: %d\n", max2);

    return 0;
}