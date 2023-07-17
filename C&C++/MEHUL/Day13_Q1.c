#include<stdio.h>
#include<stdlib.h>

int main()
{
    int rows, columns, i, j, sum=0;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (i=0; i<rows; i++) 
    {
        arr[i] = (int *)malloc(columns * sizeof(int *));
    }

    
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("Enter the value: ");
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            sum = sum+arr[i][j];
        }
    }
    
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Sum of array is %d", sum);
    
    return 0;
}
