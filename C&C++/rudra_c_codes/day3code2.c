#include <stdio.h>
#include <math.h>

int main() {
    double number, result;

    printf("Enter a positive number: ");
    scanf("%lf", &number);

    if (number <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }

    result = log(number);

    printf("Natural logarithm of %.2lf is %.2lf\n", number, result);

    return 0;
}

