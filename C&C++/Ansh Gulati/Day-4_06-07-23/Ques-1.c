/* Ques- Write a program to determine the type of a triangle based on the 
lengths of its sides and print the result (e.g., equilateral, isosceles, 
scalene).Take the input of the length of sides from the User. */

#include<stdio.h>
int main()
{
    int side1;
    int side2;
    int side3;
    printf("Enter the length of first side of the triangle: ");
    scanf("%d",&side1);
    printf("Enter the length of second side of the triangle: ");
    scanf("%d",&side2);
    printf("Enter the length of third side of the triangle: ");
    scanf("%d",&side3);
    if(side1==side2 && side2 == side3)
    {
        printf("\nThe given Triangle is Equilateral");
    }
    else if(side1==side2 || side2==side3 || side1==side3)
    {
        printf("\nThe given Triangle is Isosceles");
    }
    else
    {
        printf("\nThe given Triangle is Scalene");  
    }
}
