/* Ques- Write a program to calculate the power of a number 
using the pow() function from the <cmath> library.*/

#include<stdio.h>
#include<math.h>
int main()
{
    float number;
    int power;
    float result;
    printf("Enter a Number: ");
    scanf("%f",&number);
    printf("Enter the power of the number: ");
    scanf("%d",&power);
    result= pow(number,power);
    printf("%f when raised to the power %d results in %f",number,power,result);
    return 0;
}
