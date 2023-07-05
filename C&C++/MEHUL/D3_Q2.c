#include<stdio.h>
#include<math.h>

int main()
{
    double num, num2;

    printf("Enter the number: ");
    scanf("%f", &num);

    num2 = log10(num);

    printf("%d", num2);
}
