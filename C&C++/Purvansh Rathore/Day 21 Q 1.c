#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number to generate its multiplication table (up to 10):\n");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1; // Exit the program with an error code
    }

    // Check if the input number is non-positive
    if (number <= 0) {
        printf("Please enter a positive non-zero number.\n");
        return 1; // Exit the program with an error code
    }

    printf("Multiplication Table for %d:\n", number);
    printf("-------------------------\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d x %2d = %3d\n", number, i, number * i);
    }

    return 0; // Exit the program successfully
}
