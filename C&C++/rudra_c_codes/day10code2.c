#include <stdio.h>

int isSorted(int arr[], int n) {
    if (n <= 1)
        return 1;

    if (arr[n - 1] < arr[n - 2])
        return 0;

    return isSorted(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 4, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n))
        printf("The array is sorted in ascending order.\n");
    else
        printf("The array is not sorted in ascending order.\n");

    return 0;
}

