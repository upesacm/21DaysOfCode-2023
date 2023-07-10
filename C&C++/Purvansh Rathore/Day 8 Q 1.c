//DAY 8

//Question 1
#include <stdio.h>

#define ROWS 3
#define COLS 3

int countEvenElements(int arr[][COLS], int rows, int cols) {
    int count = 0;

    for (int i = 0; i < rows * cols; i++) {
        if ((*arr)[i] % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[ROWS][COLS];

    // Taking input from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int evenCount = countEvenElements(arr, ROWS, COLS);
    printf("The number of even elements in the array is: %d\n", evenCount);

    return 0;
}
