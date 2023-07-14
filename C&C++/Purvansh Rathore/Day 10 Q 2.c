#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int size) {
    // Base case: If the array has 0 or 1 element, it is considered sorted
    if (size <= 1) {
        return true;
    }

    // Check if the last two elements are in the correct order
    if (arr[size - 1] < arr[size - 2]) {
        return false;
    }

    // Recursive call to check the remaining elements
    return isSorted(arr, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]);

    bool sorted = isSorted(arr, size);
    printf("The array is %s.\n", sorted ? "sorted" : "not sorted");

    return 0;
}
