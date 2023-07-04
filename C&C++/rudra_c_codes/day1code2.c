#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Invalid input. Please enter a three-digit number.\n");
        return 1;
    }

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}

