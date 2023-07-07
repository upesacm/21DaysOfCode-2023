// Q1 Write a program to calculate the power of a number using the pow() function from the <cmath> library.
#include<stdio.h>
#include<math.h>
int main(){
    double num,power;
    printf("Enter the number\n");
    scanf("%lf",&num);
    printf("Enter the power\n");
    scanf("%lf",&power);
    double ans= pow(num,power);
    printf("The result is: %.2lf\n", ans);
}
