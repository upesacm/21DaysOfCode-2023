#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#define MAX_SIZE 100

int isSymmetric(int matrix[MAX_SIZE][MAX_SIZE], int size, int row, int col) {
  
    if (row == size) {
        return 1;
    }
    if (matrix[row][col] != matrix[col][row]) {
        printf("Mismatch found at position (%d, %d) and (%d, %d)\n", row + 1, col + 1, col + 1, row + 1);
        return 0;
    }

   
    if (col + 1 < size) {
        return isSymmetric(matrix, size, row, col + 1);
    }

  
    return isSymmetric(matrix, size, row + 1, row + 1);
}

int main() {
    int size;
    int matrix[MAX_SIZE][MAX_SIZE];

    scanf("%d", &size);

  
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int result = isSymmetric(matrix, size, 0, 0);

    // Output the results
    if (result) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
