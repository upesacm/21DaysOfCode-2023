#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int issym(int rows,int a[][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (a[i][j] != a[j][i]) {
                printf("Mismatch found at position (%d, %d) and (%d, %d)\n", i + 1, j + 1, j + 1, i + 1);
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
}

int main() {
    int rows;
    scanf("%d", &rows);
    int a[rows][rows];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int result = issym(rows,a);

    if (result) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
