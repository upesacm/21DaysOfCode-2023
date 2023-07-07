//DAY 5

//Question 1
#include <stdio.h>

int main() {
    // Take input from the user
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Initialize the first two numbers in the Fibonacci series
    int firstNum = 0;
    int secondNum = 1;

    printf("Fibonacci series up to %d:\n", num);

    // Print the Fibonacci series using a for loop
    for (int i = 0; i <= num; i++) {
        printf("%d ", firstNum);

        // Update the Fibonacci numbers
        int nextNum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = nextNum;
    }

    return 0;
}