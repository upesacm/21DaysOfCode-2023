// 2. Implement a recursive function to check if a given array is sorted in ascending order. 

#include <stdio.h>

int isSorted(int arr[], int size) {
    if (size <= 1)
        return 1;
    
    if (arr[size-1] < arr[size-2])
        return 0;
    
    return isSorted(arr, size-1);
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sorted = isSorted(arr, size);
    
    if (sorted)
        printf("The array is sorted in ascending order.\n");
    else
        printf("The array is not sorted in ascending order.\n");
    
    return 0;
}
