// Q2 Write a program that takes an array of integers as input and calculates the sum of all elements in the array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
     printf("Sum of all elements in the array is: %d\n", sum);
}
