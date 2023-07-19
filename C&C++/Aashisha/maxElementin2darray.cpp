#include <stdio.h>
#include <limits.h>

int main() {
    int rows, columns;
    scanf("%d %d", &rows, &columns);
    int matrix[rows][columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
                scanf("%d", &matrix[i][j]); 
        }
    }

    int maxElement = INT_MIN;
    long long sumDivisible = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] != 0 && matrix[i][j] % maxElement == 0) {
                sumDivisible += matrix[i][j];
            }
        }
    }

    printf("Maximum Element: %d\n", maxElement);
    printf("Sum of Divisible Elements: %lld\n", sumDivisible);

    return 0;
}
