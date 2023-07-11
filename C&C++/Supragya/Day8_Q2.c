// Q2 Write a program to find the sum of each row and each column in a 2D integer array.
#include<stdio.h>
int main(){
    int m, n;
    int row_sum=0,column_sum=0;
    printf("Enter the rows \n");
    scanf("%d",&n);
    printf("Enter the columns \n");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter the elements of the 2D array\n");
    for (int  i = 0; i < n; i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Array is\n");
    for (int  i = 0; i < n; i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for (int  i = 0; i < n; i++){
        for(int j=0;j<m;j++){
            row_sum+=arr[i][j];
        }
    printf("Sum of %d row = %d \n",i,row_sum);
    row_sum=0;
    }
    for (int  i = 0; i < n; i++){
        for(int j=0;j<m;j++){
            column_sum+=arr[j][i];
        }
    printf("Sum of %d column = %d \n",i,column_sum);
    column_sum=0;
    }
    
    
}
