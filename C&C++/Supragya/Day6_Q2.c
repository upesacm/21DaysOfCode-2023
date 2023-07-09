// Q2 Write a C/C++ program to sort an integer array in ascending order using a sorting algorithm.
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
void Selection_sort(int array[],int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(array[min]>array[j]){
                min=j;
            }
        }
        int temp =array[min];
            array[min]=array[i];
            array[i]=temp;
    }
}
void Insertion_sort(int array[],int n){
    for(int i=1;i<n;i++){
        int key =array[i];
        int j=i-1;
        while (j>=0 && key<array[j] ) {
            array[j+1]=array[j];
            j--;
        }
            array[j+1]=key;
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
    int type;
    printf("\nWhich sorting algorithm you want to use\nPress \n1) Bubble sort \n2) Selection sort \n3) Insertin sort\n");
    scanf("%d",&type);
    switch(type){
    case 1:
    Bubble_sort(array,n);
    break;
    case 2:
    Selection_sort(array,n);
    break;
    case 3:
    Insertion_sort(array,n);
    break;
    }
    printf("Array after sorting\n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    } 
}
