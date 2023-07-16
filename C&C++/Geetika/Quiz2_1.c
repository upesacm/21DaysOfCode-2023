#include <stdio.h>
#include <limits.h>

#define MAX_ROWS 1000
#define MAX_COLS 1000

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    int max_value = INT_MIN;
    long long int sum = 0;

    scanf("%d", &rows);
    scanf("%d", &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0 && matrix[i][j] % max_value == 0) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Maximum Element: %d\n", max_value);
    printf("Sum of Divisible Elements: %lld\n", sum);

    return 0;
}
