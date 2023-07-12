// 1. Create a function that takes an array of integers and its size as parameters, and returns the average of all the elements in the array.

#include <stdio.h>

double calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double) sum / size;
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

    double average = calculateAverage(arr, size);
    printf("Average: %lf\n", average);

    return 0;
}
