#include <stdio.h>

int main()
{
    int num,rem,sum=0;
    printf("Enter your desired three-digit number: ");
    scanf("%d", &num);
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("Sum: %d" , sum);
}