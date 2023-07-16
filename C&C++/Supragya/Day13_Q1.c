// Q1 Write a program that dynamically allocates memory for a two-dimensional array of integers with 
// user-defined rows and columns. Populate the array with values entered by the user and print the sum of all elements.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int rows,columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    int **array = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        array[i] = (int *)malloc(columns * sizeof(int));
    }
     printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum+= array[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
}
