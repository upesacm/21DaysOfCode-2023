// Q1 Write a C/C++ program that uses a global constant PI with a value of 3.14159. 
// The program should prompt the user to enter the radius of a circle, calculate the circumference 
// using the constant, and print the result on the console.
#include<stdio.h>
# define  pi 3.14159
int main(){
    double radius, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    circumference= 2*pi*radius;
    printf("The circumference of the circle is: %lf\n", circumference);
}
