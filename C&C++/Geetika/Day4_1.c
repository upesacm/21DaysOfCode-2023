//1. Write a program to determine the type of a triangle based on the lengths of its sides and print the result (e.g., equilateral, isosceles, scalene).
// Take the input of the length of sides from the User.

#include <stdio.h>
int main() {
    float side1, side2, side3;
    
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);
    printf("Enter the length of side 2: ");
    scanf("%f", &side2);
    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("It is an equilateral triangle.\n");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("It is an isosceles triangle.\n");
    }
    else {
        printf("It is a scalene triangle.\n");
    }
  return 0;
}
