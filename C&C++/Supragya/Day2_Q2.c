// Q2 Write a program to swap the values of two variables without using a third variable using the bitwise XOR operator.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of first variable a \n");
    scanf("%d",&a);
    printf("Enter the value of first variable b \n");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Swapped value of \na is %d\nand b is %d\n",a,b);
}
