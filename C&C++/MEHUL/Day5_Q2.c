#include <stdio.h>

int main()
{
    int num1, num2, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2)
        i = num1;
    else
        i = num2;

    while (i>=0)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
        i++;
    }

    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}
