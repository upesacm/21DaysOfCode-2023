#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int binarySearch(int array[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == target) {
            return mid;
        } else if (array[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int target;
    scanf("%d", &target);
    int result = binarySearch(array, n, target);
    if (result != -1) {
        printf("%d\n", result);
    } 
}