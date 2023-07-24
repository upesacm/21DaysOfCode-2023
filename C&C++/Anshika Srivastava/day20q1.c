/* Write a C/C++ program that uses a global constant PI with a value of 3.14159. 
The program should prompt the user to enter the radius of a circle, calculate the circumference using the constant, and print the result on the console. */

#include <stdio.h>
#define PI 3.14259
int main() {
    float radius;
    printf("Enter the radius of the circle ");
    scanf("%f", &radius);
    float circumference = 2 * PI * radius;
    printf("The circumference of the circle is: %f\n", circumference);
    return 0;
}
