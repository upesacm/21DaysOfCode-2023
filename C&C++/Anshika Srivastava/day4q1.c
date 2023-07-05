#include <stdio.h>
int main()
{
    printf("Enter the length of sides\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    printf("Equilateral Triangle");
    else if(a==b||a==c||b==c)
    printf("Isosceles Triangle");
    else
    printf("Scalene Triangle");
    return 0;
}
