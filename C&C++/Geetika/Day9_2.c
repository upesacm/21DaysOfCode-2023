// 2. Implement a function that takes an array of integers and its size as parameters. 
// The function should rearrange the array in such a way that all the negative numbers appear before the positive numbers while preserving the relative order of the negative and positive numbers.

#include <stdio.h>

void rearrangeArray(int arr[], int size) {
    int temp[size];
    int negIndex = 0;
    int posIndex = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            temp[negIndex] = arr[i];
            negIndex++;
        } else {
            temp[size - 1 - posIndex] = arr[i];
            posIndex++;
        }
    }

    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    rearrangeArray(arr, size);

    printf("\nRearranged Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
