//2. Write a program to find the sum of each row and each column in a 2D integer array

#include <stdio.h>

void Sum(int arr[][3], int rows, int cols) {
    int rowSum[rows];
    int colSum[cols];

    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
    }
    for (int j = 0; j < cols; j++) {
        colSum[j] = 0;
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
        }
    }

    printf("Row sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
    
    printf("Column sums:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
}

int main() {
    int arr[][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };
    
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
    
    Sum(arr, rows, cols);
    
    return 0;
}
