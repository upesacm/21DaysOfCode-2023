//Write a program to calculate the sum of the digits of a three-digit number entered by the user
#include <stdio.h>
int main()
{
      int num,first,last,mid,sum,rem;
      printf("Enter 3-Digit Number: ");
      scanf("%d",&n);

      first=n/100;
      rem=n%100;
      last=rem%10;
      mid=rem/10;

      sum=last+mid+first;
      printf("\nSum of 3-Digits : %d",sum);
      return 0;
}
