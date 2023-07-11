//DAY 9

//Question 2
#include <stdio.h>

void rearrangeArray(int array[], int size) {
    int i, j;
    for (i = 0, j = 0; j < size; j++) {
        if (array[j] < 0) {
            if (i != j) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            i++;
        }
    }
}

int main() {
    int array[] = {-5, 10, -3, 7, -2, 0};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    rearrangeArray(array, size);

    printf("\nRearranged Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
