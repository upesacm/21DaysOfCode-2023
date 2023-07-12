// Q2 Implement a function that takes an array of integers and its size as parameters. 
// The function should rearrange the array in such a way that all the negative numbers appear before 
// the positive numbers while preserving the relative order of the negative and positive numbers.
#include<stdio.h>
void rearrange(int arr[],int n){
    int temp[n];
    int j=0;
    for(int i =0;i<n;i++){
        if(arr[i]<0){
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i =0;i<n;i++){
        if(arr[i]>=0){
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
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
    printf("Array before rearrangement\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    rearrange(arr,n);
    printf("\nArray after rearrangement\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
