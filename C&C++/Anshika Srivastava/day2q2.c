#include<stdio.h> 
int main() 
{
printf("Enter the values of a and b\n"); 
int a,b;
scanf("%d %d",&a,&b); 
printf("Before swapping a is %d and b is %d\n",a,b); 
a=a^b;
b=a^b;
a=a^b;
printf("After swapping a is %d and b is %d",a,b); 
return 0; 
}
