#include<stdio.h>
#include<math.h>

int main() 
{
    int num, p, num2;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the power of: ");
    scanf("%d", &p);

    num2 = pow(num, p);

    printf("%d", num2);

}
