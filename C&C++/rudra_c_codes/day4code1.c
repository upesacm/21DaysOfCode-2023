#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of the sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%f", &side1);

    printf("Side 2: ");
    scanf("%f", &side2);

    printf("Side 3: ");
    scanf("%f", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is an equilateral triangle.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is an isosceles triangle.\n");
    } else {
        printf("The triangle is a scalene triangle.\n");
    }

    return 0;
}

