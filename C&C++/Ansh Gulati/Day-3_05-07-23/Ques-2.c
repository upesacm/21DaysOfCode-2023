/* Ques- Write a program to calculate the natural logarithm (base e) of 
a given number using the log() function from the <cmath> library.*/

#include<stdio.h>
#include<math.h>
int main()
{
    double number;
    double result;
    printf("Enter a number: ");
    scanf("%lf",&number);
    result=log(number);
    printf("The natural logarithm (base e) of %lf is: %lf",number,result);
}
