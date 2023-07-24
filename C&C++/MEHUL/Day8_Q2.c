#include <stdio.h>

int ROWS, COLS;

void TotalSum(int arr[ROWS][COLS]) {
    int rowSums[ROWS] = {0};
    int colSums[COLS] = {0};

    // Calculate row sums
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            rowSums[i] += arr[i][j];
        }
    }

    // Calculate column sums
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i < ROWS; i++) {
            colSums[j] += arr[i][j];
        }
    }

    // Print row sums
    printf("Row sums:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    // Print column sums
    printf("Column sums:\n");
    for (int j = 0; j < COLS; j++) {
        printf("Column %d: %d\n", j + 1, colSums[j]);
    }
}

int main() {
    int arr[ROWS][COLS], i, j
    
    printf("Enter the number of rows: ");
    scanf("%d", &ROWS);
    printf("Enter number of columns: ");
    scanf("%d", &COLS);
    
    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLS; j++)
        {
            printf("Enter the value: ");
            scanf("%d", &arr[i][j])
        }
    }

    TotalSum(arr);

    return 0;
}
