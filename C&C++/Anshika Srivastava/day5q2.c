#include <stdio.h>
int main()
{
    printf("Enter two numbers\n");
    int a,b;
    scanf("%d %d",&a,&b);
    int max=(a>b)?a:b;
    int lcm=max;
    while(1)
    {
    if((lcm%a==0) && (lcm%b==0))
    break;
    lcm=lcm+max;  //generating multiples
    }
    printf("LCM is %d ",lcm);
    return 0;
}
