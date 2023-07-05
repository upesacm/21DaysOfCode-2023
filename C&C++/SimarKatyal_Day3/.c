//Q1 : Write a program to calculate the power of a number using the pow() function from the <cmath> library.
#include <stdio.h>
#include <math.h>
int main()
{
    printf("welcome to POWER CHECKER machine!!\n");
    float base, power, result;
    printf("Please enter the base value : ");
    scanf("%f",&base);
    printf("Please enter the power value : ");
    scanf("%f",&power);
    result = pow(base,power);
    printf("%.2f rasied to the power of %.2f is %.2f.\n",base,power,result);
    printf("\nThank you!!\nKeep visiting us!!");

    return 0;
}



//Q2 : Write a program to calculate the natural logarithm (base e) of a given number using the log() function from the <cmath> library.
#include <stdio.h>
#include <math.h>
int main()
{
    printf("welcome to LOGARITHM CHECKER machine!!\n");
    float base, result;
    printf("Please enter the base value : ");
    scanf("%f",&base);
    result = log(base);
    printf("The natural logarithm of %f is %.2f.\n",base,result);
    printf("\nThank you!!\nKeep visiting us!!");

    return 0;
}
