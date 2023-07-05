
#include <stdio.h>
#include <math.h>
//DAY 3

//First Question

//Driver code
int main() {
    double base, exp, res;

    // Get input from the user
    printf("Enter the base number: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exp);

    // Calculate the power using pow() function
    res = pow(base, exp);

    // Display the result
    printf("The result is: %g\n", res);
    return 0;
}