#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sum(int n, int arr[]) {
    int smallest = arr[0];
    int largest = arr[0];
    int smallestIndex = 0;
    int largestIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }
        if (arr[i] > largest) {
            largest = arr[i];
            largestIndex = i;
        }
    }
    return smallestIndex + largestIndex;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = sum(n, arr);
    printf("%d\n", result);
    return 0;
}