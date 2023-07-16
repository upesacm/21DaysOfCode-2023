#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int rows, int columns) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(columns * sizeof(int));
    }
    return matrix;
}

void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void populateMatrix(int **matrix, int rows, int columns) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int **multiplyMatrices(int **matrix1, int rows1, int columns1, int **matrix2, int rows2, int columns2) {
    int **result = createMatrix(rows1, columns2);

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}

void printMatrix(int **matrix, int rows, int columns) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, columns1;
    int rows2, columns2;

    printf("Enter the dimensions of the first matrix:\n");
    printf("Number of rows: ");
    scanf("%d", &rows1);
    printf("Number of columns: ");
    scanf("%d", &columns1);

    printf("Enter the dimensions of the second matrix:\n");
    printf("Number of rows: ");
    scanf("%d", &rows2);
    printf("Number of columns: ");
    scanf("%d", &columns2);

    if (columns1 != rows2) {
        printf("Matrix multiplication not possible. Invalid dimensions.\n");
        return 0;
    }

    int **matrix1 = createMatrix(rows1, columns1);
    int **matrix2 = createMatrix(rows2, columns2);

    printf("Enter the elements for the first matrix:\n");
    populateMatrix(matrix1, rows1, columns1);

    printf("Enter the elements for the second matrix:\n");
    populateMatrix(matrix2, rows2, columns2);

    int **result = multiplyMatrices(matrix1, rows1, columns1, matrix2, rows2, columns2);

    printf("Result of matrix multiplication:\n");
    printMatrix(result, rows1, columns2);

    freeMatrix(matrix1, rows1);
    freeMatrix(matrix2, rows2);
    freeMatrix(result, rows1);

    return 0;
}
