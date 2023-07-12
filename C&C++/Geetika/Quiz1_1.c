//Write a C program that takes an array of integers as input and finds the largest and smallest numbers in the array.
//The program should return the sum of the indices of the largest and the smallest number.

#include <stdio.h>

int findSmallest(int array[], int size){
    int smallest = array[0];
    int index = 0;
    
    for(int i=1; i<size; i++){
        if(array[i]<smallest){
            smallest = array[i];
            index =i;
        }
    }
    return index;
}

int findLargest(int array[], int size){
    int largest = array[0];
    int index = 0;
    
    for(int i=1; i<size; i++){
        if(array[i]>largest){
            largest = array[i];
            index =i;
        }
    }
    return index;
}

int main(){
    int array[] ={1,4,5,3,2};
    int size =sizeof(array)/sizeof(array[0]);
    int smallestIndex =findSmallest(array,size);
    int largestIndex = findLargest(array,size);
    
    int sumIndices = smallestIndex +largestIndex;
    printf("%d",sumIndices);
}
