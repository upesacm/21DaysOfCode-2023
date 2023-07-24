#include <stdio.h>
#include <stdlib.h>

void mergeSortedArrays(const int* arr1, const int* arr2, int size, int* result) {
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < size && j < size) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < size) {
        result[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int size;
    scanf("%d", &size);
    int* arr1 = (int*)malloc(size * sizeof(int));
    int* arr2 = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    int* result = (int*)malloc(2 * size * sizeof(int));
    mergeSortedArrays(arr1, arr2, size, result);
    for (int i = 0; i < 2 * size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(arr1);
    free(arr2);
    free(result);
    return 0;
}
