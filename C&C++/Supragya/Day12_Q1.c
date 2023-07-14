// Q1  Write a program that sorts an array of integers in ascending order using the bubble sort algorithm
#include<stdio.h>
void Bubble_sort(int array[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                int temp =array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
int main(){
     int n;
    printf("Enter the number of elements you want to insert in the array\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements in the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Array before sorting\n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    Bubble_sort(array,n);
    printf("Array after sorting\n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    } 
}
