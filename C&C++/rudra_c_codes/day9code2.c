#include <stdio.h>

void rearrangeArray(int arr[], int size) {
    int temp[size];
    int index = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            temp[index++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            temp[index++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {-2, 3, -7, 0, -1, 8, -4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array before rearrangement: ");
    printArray(arr, size);

    rearrangeArray(arr, size);

    printf("Array after rearrangement: ");
    printArray(arr, size);

    return 0;
}

