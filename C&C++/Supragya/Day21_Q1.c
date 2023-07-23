// Q1  Implement a C/C++ program that takes input from the user and generates the multiplication table of the
// given number up to 10, displaying the results in a well-formatted manner. Ensure the program handles different 
// edge cases gracefully and provides appropriate feedback to the user when needed.
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &number);
    if (number <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }
    printf("Multiplication Table of %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}
