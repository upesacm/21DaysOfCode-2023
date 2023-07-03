#include <stdio.h>

int main()
{
   printf("Enter 3 digit number whose digit's sum is to be calculated\n");
   int n,sum=0;
   scanf("%d",&n);
   while(n!=0)
   {
    int d=n%10;
    sum=sum+d;
    n/=10;
   }
   printf("Sum is %d",sum);
   return 0;
}