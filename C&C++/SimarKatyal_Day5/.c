//Write a program to print the Fibonacci series up to a given number using a for loop.
#include <stdio.h>

int main()
{
    printf("welcome to the FIBONACCI machine!!\n");
    int x=3, n, a=0, b=1, c;
    printf("Please enter a number uptill which you want the Fibonacci series : ");
    scanf("%d",&n);
    printf("FIBONACCI SERIES : \n%d\n%d\n",a,b);
    while (x<=n) {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        x++;
    }
    printf("\nThank you!!\nKeep visiting!!");
    return 0;
}

