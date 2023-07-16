/*Write a program that dynamically allocates memory for a two-dimensional array of integers with user-defined rows and columns. 
Populate the array with values entered by the user and print the sum of all elements. */

#include <stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter rows and columns of 2D array\n");
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    
    int** arr = (int**)malloc(r * sizeof(int*));
    for (i = 0; i < r; i++)
    arr[i] = (int*)malloc(c * sizeof(int));
    printf("Enter array elements\n");
    int sum=0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++){
        scanf("%d",&arr[i][j]);
        sum=sum+arr[i][j];
        }}
    printf("The sum is %d",sum);
    return 0;
}
