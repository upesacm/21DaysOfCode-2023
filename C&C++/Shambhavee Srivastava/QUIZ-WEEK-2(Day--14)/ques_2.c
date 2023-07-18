#include <stdio.h>

#define MAX_SIZE 100

int isSymmetric(int matrix[][MAX_SIZE], int size, int row, int col) {
    if (row >= size) {
        return 1; // Base case, end of matrix
    }

    if (col >= size) {
        return isSymmetric(matrix, size, row + 1, 0); // Move to the next row
    }

    if (matrix[row][col] != matrix[col][row]) {
        printf("Mismatch found at position (%d, %d) and (%d, %d)\n", row + 1, col + 1, col + 1, row + 1);
        return 0; // Mismatch found, matrix is not symmetric
    }

    return isSymmetric(matrix, size, row, col + 1); // Recursive call for the next column
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size, row, col;


    scanf("%d", &size);

    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    if (isSymmetric(matrix, size, 0, 0)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
