#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    double result, r1, r2, real, i;
    printf("Enter the qudradic equation (ax^2 + bx + c)\n");

    printf("Enter the value of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    result = pow(b, 2) - (4*a*c);

    if(result > 0)
    {
        r1 = (-b + sqrt(result)) / (2*a);
        r2 = (-b - sqrt(result)) / (2*a);
        printf("Roots are real and distinct.\n");
        printf("Root 1: %f\n", r1);
        printf("Root 2: %f\n", r2);
    }
    else if(result == 0)
    {
        r1 = -b / (2*a);
        printf("Roots are real and equal.\n");
        printf("Root: %d\n", r1);
    }
    else
    {
        real = -b / (2*a);
        i = sqrt(-result) / (2*a);
        printf("Roots are imaginary.\n");
        printf("Root 1: %f + %f\n", real, i);
        printf("Root 2: %f - %f i\n", real, i);
    }
}
