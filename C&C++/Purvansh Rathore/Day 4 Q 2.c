//DAY 4

//Question 2
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double D, root1, root2;

    printf("Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    D = b * b - 4 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
    } else if (D == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 and Root 2: %.2lf\n", root1);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-D) / (2 * a);
        printf("Roots are complex and imaginary.\n");
        printf("Root 1: %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2: %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
