TASK1
#include<stdio.h>
double calculateaverage(int arr[],int size) {
    int sum=0;

    for(int i=0;i<size;i++) {
        sum=arr[i];


    }
    double average=(double)sum/size;
    return average;
}
int main() {
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    double avg=calculateaverage(arr,size);
    printf("Average:0.2f",avg);
    return 0;

}

TASK2
#include <stdio.h>

void rearrangeArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    
    while (left < right) {
        // Find the first positive number from the left
        while (arr[left] < 0 && left < right) {
            left++;
        }
        
        // Find the first negative number from the right
        while (arr[right] >= 0 && left < right) {
            right--;
        }
        
        // Swap the positive and negative numbers
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
}

int main() {
    int arr[] = {-2, 4, -6, 8, -10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Before rearranging: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    rearrangeArray(arr, size);
    
    printf("After rearranging: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
