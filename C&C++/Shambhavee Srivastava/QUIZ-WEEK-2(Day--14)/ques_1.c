#include <stdio.h>
#include <stdint.h>

#define MAX_SIZE 1000

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, columns;


    scanf("%d %d", &rows, &columns);

 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxElement = matrix[0][0];
    int64_t sum = 0;

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
                sum += matrix[i][j];
            }
        }
    }

    printf("Maximum Element: %d\n", maxElement);
    printf("Sum of Divisible Elements: %ld\n", sum);

    return 0;
}
