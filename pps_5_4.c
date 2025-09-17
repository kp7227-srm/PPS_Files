#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int r1, c1, r2, c2;
    int i, j, k;

    // 1. Get dimensions of the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // 2. Get dimensions of the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // 3. Check the multiplication constraint
    if (c1 != r2) {
        printf("Error: Matrix multiplication is not possible.\n");
        printf("The number of columns in the first matrix (%d) must be equal to the number of rows in the second matrix (%d).\n", c1, r2);
        return 1; // Exit with an error code
    }

    // 4. Get elements of the first matrix
    printf("\nEnter elements of matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter element mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // 5. Get elements of the second matrix
    printf("\nEnter elements of matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter element mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // 6. Perform matrix multiplication
    // Initialize all elements of the result matrix to 0
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Core multiplication logic
    for (i = 0; i < r1; i++) {       // Iterate through rows of mat1
        for (j = 0; j < c2; j++) {   // Iterate through columns of mat2
            for (k = 0; k < c1; k++) { // Iterate through columns of mat1/rows of mat2
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // 7. Print the resulting matrix
    printf("\nProduct of the two matrices is:\n");