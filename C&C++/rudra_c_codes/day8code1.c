//C program to count the number of even elements in a 2D integer array
#include <stdio.h>

int countEvenElements(int arr[][3], int rows, int cols) {
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    int evenCount = countEvenElements(arr, rows, cols);

    printf("Number of even elements: %d\n", evenCount);

    return 0;
}

