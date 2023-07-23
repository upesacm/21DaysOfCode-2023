#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error: Please enter a positive number as the size of the array.\n");
        return 1; 
    }
    int arr[n];
    printf("Enter %d integers as elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of all elements in the array: %d\n", sum);

    return 0; 
}
