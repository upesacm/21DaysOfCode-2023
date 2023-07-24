#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numRows, numColumns;
    
    scanf("%d", &numRows);
    
    scanf("%d", &numColumns);
    
    int matrix[1000][1000];
    
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numColumns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int maxElement = matrix[0][0];
    long long int sumDivisibleElements = 0; 
    
   
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numColumns; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }
    
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numColumns; j++) {
            if (matrix[i][j] != 0 && matrix[i][j] % maxElement == 0) {
                sumDivisibleElements += matrix[i][j];
            }
        }
    }
    
   
    printf("Maximum Element: %d\n", maxElement);
    printf("Sum of Divisible Elements: %lld\n", sumDivisibleElements);

    return 0;
}

