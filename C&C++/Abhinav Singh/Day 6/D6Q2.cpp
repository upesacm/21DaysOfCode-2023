#include <iostream>

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
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = { 9, 2, 5, 1, 7, 6, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before sorting: ";
    printArray(arr, size);

    bubbleSort(arr, size);

    std::cout << "After sorting in ascending order: ";
    printArray(arr, size);

    return 0;
}
