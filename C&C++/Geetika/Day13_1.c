// 1. Write a program that dynamically allocates memory for a two-dimensional array of integers with user-defined rows and columns. 
// Populate the array with values entered by the user and print the sum of all elements.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    int **matrix;
    int i, j, sum = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    matrix = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
