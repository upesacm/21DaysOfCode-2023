#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void mergeSortedArrays(int n, int arr1[], int arr2[], int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < n) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n], mergedArr[2 * n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    mergeSortedArrays(n, arr1, arr2, mergedArr);
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");
    return 0;
}
