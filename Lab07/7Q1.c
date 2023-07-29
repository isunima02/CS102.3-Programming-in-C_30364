#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int sumMatrix[3][3];
    int i, j;

    // Input values for matrix1
    printf("Enter values for Matrix 1 (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input values for matrix2
    printf("Enter values for Matrix 2 (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result (matrix sum)
    printf("\nMatrix Sum (Matrix 1 + Matrix 2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
