#include <stdio.h>

void mergeArrays(int n, int arr1[], int arr2[], int result[]) {
    int i = 0, j = 0, k = 0;
    
    // Compare elements of both arrays and merge them in ascending order
    while (i < n && j < n) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }
    
    // Copy any remaining elements from arr1
    while (i < n) {
        result[k++] = arr1[i++];
    }
    
    // Copy any remaining elements from arr2
    while (j < n) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    int arr1[n], arr2[n], result[2 * n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    
    mergeArrays(n, arr1, arr2, result);
    
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", result[i]);
    }
    
    return 0;
}
