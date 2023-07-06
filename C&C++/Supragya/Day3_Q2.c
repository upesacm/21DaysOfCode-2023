// Q2 Write a program to calculate the natural logarithm (base e) of a given number using the log() function from the <cmath> library.
#include<stdio.h>
#include<math.h>
int main(){
    double number, result;
    printf("Enter the number: \n");
    scanf("%lf", &number);
    result = log(number);
    printf("The natural logarithm of %.2lf is %.2lf\n", number, result);
    
}
