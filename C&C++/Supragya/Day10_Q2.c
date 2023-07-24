// Q2  Implement a recursive function to check if a given array is sorted in ascending order. 
#include <stdio.h>
int isSorted(int arr[], int n) {
    if (n <= 1) {
        return 1;
    }
    else if (arr[n-2] > arr[n-1]) {
        return 0;
    }
    else {
        return isSorted(arr, n-1);
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (isSorted(arr, n)) {
        printf("The array is sorted in ascending order.\n");
    }
    else {
        printf("The array is not sorted in ascending order.\n");
    }

    return 0;
}
