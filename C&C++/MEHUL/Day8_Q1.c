#include <stdio.h>

int ROWS, COLS;

int TotalEven(int arr[ROWS][COLS]) {
    int count = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int arr[ROWS][COLS], i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &ROWS);
    printf("Enter the number of columns: ");
    scanf("%d", &COLS);
    
    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLS; j++)
        {
            printf("Enter the value: ");
            scanf("%d", &arr[i][j]);
        }
    }

    int evenCount = TotalEven(arr);

    printf("Number of even elements: %d\n", evenCount);

    return 0;
}
