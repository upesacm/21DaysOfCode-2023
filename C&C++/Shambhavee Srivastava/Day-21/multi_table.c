#include <stdio.h>

int main() {
    int number;
    printf("Enter a number to generate its multiplication table (up to 10): ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Error: Please enter a non-negative number.\n");
        return 1; 
    }

    // Print the multiplication table
    printf("Multiplication Table of %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}
