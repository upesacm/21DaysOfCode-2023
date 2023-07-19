#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {9, 4, 5, 1, 2, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting: ");
    printArray(arr, size);

    bubbleSort(arr, size);

    printf("Array after sorting in ascending order: ");
    printArray(arr, size);

    return 0;
}

