//DAY 4

//Question 1
#include <stdio.h>

int main() {
    double a, b, c;

    printf("Enter the lengths of each side of the triangle(a, b, c)\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    if (a == b && b == c) {
        printf("The triangle is equilateral.\n");
    } else if (a == b || a == c || b == c) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }

    return 0;
}