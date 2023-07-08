#include <stdio.h>

int findSecondSmallest(int arr[], int size) {
    int smallest = arr[0];
    int secondSmallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main() {
    int arr[] = {9, 4, 5, 1, 2, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondSmallest = findSecondSmallest(arr, size);

    printf("The second smallest element in the array is: %d\n", secondSmallest);

    return 0;
}

