// Q2 Create a program that dynamically allocates memory for a matrix of integers. 
// Allow the user to enter the dimensions of the matrix and populate it with values. 
// Perform matrix multiplication and print the result.
#include<stdio.h>
#include<stdlib.h>
void print_Matrix(int **matrix,int rows, int columns){
for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
void Matrix_Multiplication( int **matrix1, int **matrix2, int **result, int rows1, int columns1, int rows2, int columns2){
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
int main(){
    int rows1,columns1,rows2,columns2;
    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &columns1);
    printf("Enter the number of rows for matrix 2: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &columns2);
    if(columns1!=rows2){
        printf("Matrix multiplication is not possible!\n");
        return 0;
    }
    int **matrix1 = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++) {
        matrix1[i] = (int *)malloc(columns1 * sizeof(int));
    }
    printf("Enter the elements of the matrix 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    int **matrix2 = (int **)malloc(rows2 * sizeof(int *));
    for (int i = 0; i < rows2; i++) {
        matrix2[i] = (int *)malloc(columns2 * sizeof(int));
    }
    printf("Enter the elements of the matrix 2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    int **result = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++) {
        result[i] = (int *)malloc(columns2 * sizeof(int));
    }

    Matrix_Multiplication(matrix1, matrix2, result, rows1, columns1, rows2, columns2);
    printf("Result of matrix multiplication:\n");
    print_Matrix(result, rows1, columns2);
}
