// Q1 Write a program to count the number of even elements in a 2D integer array.
#include<stdio.h>
int main(){
    int m, n;
    int count=0;
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
    for (int  i = 0; i < n; i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]%2==0){
                count++;
            }
        }
    }
    printf("Number of even elements in 2D array = %d \n",count); 
}
