//Q1 : Write a program to determine the type of a triangle based on the lengths of its sides and print the result (e.g., equilateral, 
//isosceles, scalene). Take the input of the length of sides from the User.
#include <stdio.h>
int main()
{
    printf("Welcome to the TRIANGLE machine!!!\n");
    printf("Here we require you to kindly enter the length of the sides of the triangle.\n");
    float len1, len2, len3;
    printf("Please enter the first length : ");
    scanf("%f",&len1);
    printf("Please enter the second length : ");
    scanf("%f",&len2);
    printf("Please enter the third length : ");
    scanf("%f",&len3);

    if (len1 == len2 && len2 == len3) {
        printf("It is an equilateral triangle with length of sides %.2f, %.2f & %.2f respectively.",len1,len2,len3);
    }
    else if (len1 == len2 || len2 == len3 || len1 == len3) {
        printf("It is an isosceles triangle with length of sides %.2f, %.2f & %.2f respectively.",len1,len2,len3);
    }
    else {
        printf("It is a scalene triangle with length of sides %.2f, %.2f & %.2f respectively.",len1,len2,len3);
    }
    
    printf("\nThank you!!\nKeep visiting!!");
    return 0;
}


//Q2 : Write a program to determine the roots of a quadratic equation (ax^2 + bx + c = 0) based on the values of a, b, and c entered by the 
//user. Handle all possible cases (real and distinct roots, real and equal roots, imaginary roots) and print the appropriate message.
#include <stdio.h>
#include <math.h>
int main () {
    float a, b, c, root1, root2, temp, d;   //temp- temporary variable & d - disriminant 
    printf("Welcome to the QUADRATIC game!!\n");
    printf("Here we require you to enter the values of the constants so as to make the quadratic equation :\n");
    printf("ax^2 + bx + c\n\n");
    
    printf("Please enter the value of a : ");
    scanf("%f",&a);
    printf("Please enter the value of b : ");
    scanf("%f",&b);
    printf("Please enter the value of c : ");
    scanf("%f",&c);
    
    temp = (b*b) - (4*a*c);
    d = pow(temp,0.5);
    printf("\nThe discriminant for the quadratic equation %.2fx^2+%.2fx+%.2f : %.2f\n",a,b,c,d);
    
    if (d>0) {
        printf("The quadratic equation %.2fx^2+%.2fx+%.2f forms real & distinct roots.\n");
        root1 = (-b+d)/(2*a);
        root2 = (-b-d)/(2*a);
        printf("Root 1 = %.2f\nRoot 2 = %.2f",root1,root2);
    }
    else if (d==0) {
        printf("The quadratic equation %.2fx^2+%.2fx+%.2f forms real & equal roots.\n");
        root1 = (-b+d)/(2*a);
        printf("The real & equal roots are = %.2f & %.2f",root1,root1);
    }
    else {
        printf("The quadratic equation %.2fx^2+%.2fx+%.2f forms imaginary roots.\n");
        root1 = (-b+d)/(2*a);
        root2 = (-b-d)/(2*a);
        printf("Root 1 = %.2f\nRoot 2 = %.2f",root1,root2);
    }
    
    printf("\nThank you\nKeep visiting!!\n");
    return 0;
}
