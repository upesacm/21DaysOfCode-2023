//DAY 9

//Question 1
#include <stdio.h>

float calculateAverage(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    float average = (float) sum / size;
    return average;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    float average = calculateAverage(array, size);
    printf("The average is: %.2f\n", average);

    return 0;
}
