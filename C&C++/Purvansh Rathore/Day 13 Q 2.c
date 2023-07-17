#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Read dimensions of the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    // Read dimensions of the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    // Check if matrix multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    // Dynamically allocate memory for the first matrix
    int** matrix1 = (int**)malloc(rows1 * sizeof(int*));
    for (int i = 0; i < rows1; i++) {
        matrix1[i] = (int*)malloc(cols1 * sizeof(int));
    }

    // Dynamically allocate memory for the second matrix
    int** matrix2 = (int**)malloc(rows2 * sizeof(int*));
    for (int i = 0; i < rows2; i++) {
        matrix2[i] = (int*)malloc(cols2 * sizeof(int));
    }

    // Read values for the first matrix
    printf("Enter the values for the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter the value for element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read values for the second matrix
    printf("Enter the values for the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Enter the value for element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Dynamically allocate memory for the result matrix
    int** result = (int**)malloc(rows1 * sizeof(int*));
    for (int i = 0; i < rows1; i++) {
        result[i] = (int*)malloc(cols2 * sizeof(int));
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows1; i++) {
        free(matrix1[i]);
    }
    free(matrix1);

    for (int i = 0; i < rows2; i++) {
        free(matrix2[i]);
    }
    free(matrix2);

    for (int i = 0; i < rows1; i++) {
        free(result[i]);
    }
    free(result);

    return 0;
}
