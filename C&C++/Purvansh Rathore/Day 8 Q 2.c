//DAY 8

//Question 2
#include <stdio.h>

#define ROWS 4
#define COLS 5

void findSum(int arr[ROWS][COLS]) {
    int rowSum[ROWS] = {0}; // Array to store row sums
    int colSum[COLS] = {0}; // Array to store column sums

    // Calculate sum of each row and each column
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            rowSum[i] += arr[i][j]; // Add current element to row sum
            colSum[j] += arr[i][j]; // Add current element to column sum
        }
    }

    // Print row sums
    printf("Row sums:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    // Print column sums
    printf("Column sums:\n");
    for (int j = 0; j < COLS; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
}

int main() {
    int arr[ROWS][COLS] = {{2, 4, 6, 8, 10},
                           {1, 3, 5, 7, 9},
                           {10, 20, 30, 40, 50},
                           {15, 25, 35, 45, 55}};

    findSum(arr);

    return 0;
}
