/*Create a program that dynamically allocates memory for a matrix of integers. 
Allow the user to enter the dimensions of the matrix and populate it with values. 
Perform matrix multiplication and print the result. */

#include <stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter dimensions of matrix\n");
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int mul[100][100]; //for storing the result
    int** arr = (int**)malloc(r * sizeof(int*));
    for (i = 0; i < r; i++)
    arr[i] = (int*)malloc(c * sizeof(int));
    printf("Enter matrix elements\n");
    for(i=0; i<r; i++)
    {
        for (j = 0; j < c; j++)
        scanf("%d",&arr[i][j]);
    }
    for(i=0; i<r; i++)    
    {    
        for(j=0;j<c;j++)    
        {    
        mul[i][j]=0;    
        for(int k=0;k<c;k++)    
        mul[i][j]=mul[i][j]+ arr[i][k]*arr[k][j];    //matrix multiplication
        }  
    }       
    for(i=0;i<r;i++)    //printing result
    {    
        for(j=0;j<c;j++)      
        printf("%d\t",mul[i][j]);      
    printf("\n");    
    }    
    return 0;
}
