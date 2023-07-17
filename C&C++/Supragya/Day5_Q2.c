// Q2 Write a program to find the LCM (Least Common Multiple) of two numbers using a while loop.
#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    int lcm=1;
    int max= fmax(a,b);
    while ((1))
    {
        if(max%a==0 && max%b==0){
            lcm = max;
            break;
        }
        max++;
    }
    printf("Lcm of %d and %d is %d ",a,b,lcm);
}
