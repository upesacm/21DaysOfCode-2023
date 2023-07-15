#include <stdio.h>

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[] = {5, 2, 8, 12, 1, 6};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    bubbleSort(array, size);

    printf("\n\nArray after sorting in ascending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
