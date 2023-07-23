// 1. Implement a C/C++ program that takes input from the user and generates the multiplication table of the given number up to 10, displaying the results in a well-formatted manner.
// Ensure the program handles different edge cases gracefully and provides appropriate feedback to the user when needed.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Multiplication Table of %d:\n", num);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %2d = %2d\n", num, i, num * i);
    }

    return 0;
}
