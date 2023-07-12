#include<stdio.h>

int main() {
    int arr[100], n,sum =0;
    printf("Enter number of elements you want to find average  :");
    scanf("%d", &n);
    for(int i=0;i < n;i++){
        printf("Enter single element %d:", i+1);
        scanf("%d", &arr[i]);
    }
    avg(arr,n);
}
    
void avg(int arr[], int n){
    float average;
    int sum=0;
    for(int i=0;i < n;i++){
        sum += arr[i];
    }
    average = sum/n;
    printf("The average of elements is : %f", average);
}