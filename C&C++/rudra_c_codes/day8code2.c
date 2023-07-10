//C program to find the sum of each row and each column in a 2D integer array:
#include <stdio.h>

void findRowColumnSum(int arr[][3], int rows, int cols) {
    int rowSum = 0;

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }

    printf("\n");

    int colSum = 0;

    printf("Sum of each column:\n");
    for (int j = 0; j < cols; j++) {
        colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("Column %d: %d\n", j + 1, colSum);
    }
}

int main() {
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    findRowColumnSum(arr, rows, cols);

    return 0;
}
