#include<stdio.h> 
int main() 
{
printf("Enter the year\n"); 
int y;
scanf("%d",&y); 
if((y%100==0 && y%400==0) || y%4==0 ) 
printf("Leap year"); 
else
printf("Not a leap year"); 
return 0; 
}
