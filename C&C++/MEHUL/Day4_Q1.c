#include<stdio.h>

int main()
{
    double AB, BC, AC;

    printf("Enter the sides of triangle: ");
    scanf("%f %f %f", &AB, &BC, &AC);

    if (AB == BC && BC == AC)
    {
        printf("Its and Equilateral triangle");
    }
    else if(AB == BC|| AC==BC || AB==AC)
    {
        printf("Its an Isosceles triangle");
    }
    else
    {
        printf("Its an Scalene triangle");
    }
}
