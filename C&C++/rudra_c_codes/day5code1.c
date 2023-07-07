//Write a program to print the Fibonacci series up to a given number using a for loop.

#include <stdio.h>

int main() {
    int num, i;
    int first = 0, second = 1, next;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Fibonacci Series up to %d: ", num);

    for (i = 0; i <= num; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
