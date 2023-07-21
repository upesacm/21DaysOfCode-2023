//2. Create a program that dynamically allocates memory for a matrix of integers. Allow the user to enter the dimensions of the matrix and populate it with values. 
// Perform matrix multiplication and print the result.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows1, cols1, rows2, cols2;
    int **matrix1, **matrix2, **result;
    int i, j, k;

    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &cols1);

    printf("Enter the number of rows for matrix 2: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    matrix1 = (int **)malloc(rows1 * sizeof(int *));
    for (i = 0; i < rows1; i++) {
        matrix1[i] = (int *)malloc(cols1 * sizeof(int));
    }

    matrix2 = (int **)malloc(rows2 * sizeof(int *));
    for (i = 0; i < rows2; i++) {
        matrix2[i] = (int *)malloc(cols2 * sizeof(int));
    }

    result = (int **)malloc(rows1 * sizeof(int *));
    for (i = 0; i < rows1; i++) {
        result[i] = (int *)malloc(cols2 * sizeof(int));
    }

    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of matrix 2:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Matrix multiplication result:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows1; i++) {
        free(matrix1[i]);
    }
    free(matrix1);

    for (i = 0; i < rows2; i++) {
        free(matrix2[i]);
    }
    free(matrix2);

    for (i = 0; i < rows1; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}
