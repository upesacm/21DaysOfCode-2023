#include<stdio.h>

int main()
{
    int i, r, f;

    printf("Enter the range for fibonacci series: ");
    scanf("%d", &r);

    int fibona[r];

    fibona[0] = 0;
    fibona[1] = 1;

    for(i=2; i<=r; i++)
    {
        f = fibona[i-2] + fibona[i-1];
        fibona[i] = f;
    }
    
    for(i=0; i<r; i++)
    {
        printf("%d\t", fibona[i]);
    }
}
