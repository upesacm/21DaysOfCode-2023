#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a valid positive number.\n");
        return 1; // Exit the program with an error code
    }

    int arr[n];

    printf("Enter %d integers separated by spaces:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter a valid integer.\n");
            return 1; // Exit the program with an error code
        }
    }

    // Calculate the sum of the elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0; // Exit the program successfully
}
