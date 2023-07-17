#include <stdio.h>

#define MAX_SIZE 100

int isLunarSymmetric(int matrix[][MAX_SIZE], int size, int row, int col) {

    if (row >= size) {
        return 1;
    }

    if (matrix[row][col] != matrix[col][row]) {
        printf("Mismatch found at position (%d, %d) and (%d, %d)\n", row + 1, col + 1, col + 1, row + 1);
        return 0;
    }

    if (col + 1 < size) {
        return isLunarSymmetric(matrix, size, row, col + 1);
    }

    return isLunarSymmetric(matrix, size, row + 1, 0);
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isLunarSymmetric(matrix, size, 0, 0)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
