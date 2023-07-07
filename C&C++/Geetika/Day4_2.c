// 2. Write a program to determine the roots of a quadratic equation (ax^2 + bx + c = 0) based on the values of a, b, and c entered by the user. 
// Handle all possible cases (real and distinct roots, real and equal roots, imaginary roots) and print the appropriate message.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    float d = b*b - 4*a*c;

    if (d > 0) {
        float root1 = (-b+sqrt(d))/(2*a);
        float root2 = (-b-sqrt(d))/(2*a);
        printf("Real and distinct roots:\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    }
    else if (d == 0) {
        float root = -b/(2*a);
        printf("Real and equal roots:\n");
        printf("Root 1 and Root 2: %.2f\n", root);
    }
    else {
        float real = -b/(2* a);
        float imaginary = sqrt(fabs(d))/(2*a);
        printf("Complex roots:\n");
        printf("Root 1: %.2f + %.2fi\n", real, imaginary);
        printf("Root 2: %.2f - %.2fi\n", real, imaginary);
    }
    return 0;
}
