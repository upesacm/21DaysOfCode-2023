#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

    printf("Result: %.2lf\n", result);

    return 0;
}

