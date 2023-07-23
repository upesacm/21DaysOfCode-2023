/* Implement a C/C++ program that takes input from the user and generates the multiplication table of the given number up to 10, 
displaying the results in a well-formatted manner.
Ensure the program handles different edge cases gracefully and provides appropriate feedback to the user when needed. */
#include <stdio.h>
int main() {
    int number;
    while (1) {
        printf("Enter a number: ");
        if (scanf("%d", &number) == 1) {
            break; 
        }
        while (getchar() != '\n');
        printf("Invalid input! Please enter a valid number.\n");
    }
    printf("Multiplication Table of %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}
