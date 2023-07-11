// Q1 Create a function that takes an array of integers and its size as parameters, 
// and returns the average of all the elements in the array.
#include<stdio.h>
float average(int arr[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum/n;
}
int main(){
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Average of elements of array = %.2f \n",average(arr,n));
}
