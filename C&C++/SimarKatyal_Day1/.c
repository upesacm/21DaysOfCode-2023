//Q1: Write a program that prompts the user to enter their name and prints "HELLO, <Name>!".
#include <stdio.h>

int main()
{
    printf("Welcome to Day 1 of C Programming!!\n");
    char text[100];
    printf("Please enter your name : ");
    scanf("%s", text);
    printf("Hello, %s!!",text);
  

    return 0;
}


//Q2 : Write a program to calculate the sum of the digits of a three-digit number entered by the user.
#include <stdio.h>

int main()
{
    printf("Welcome to the SUM machine!! \n");
    int num, n, rem, sum=0;
    printf("Please enter any three digit number : ");
    scanf("%d",&num);  //number entered by user is saved as 'num'
    printf("Entered number : %d\n",num);
    n = num;   //done to save the entered number as it is
    while (num>0) {
        rem = num % 10;  // remainder
        num = num/10;    // new value of num
        sum += rem;      // calculating the sum
    }
    printf("Sum of digits of the entered number %d is %d",n,sum);

    return 0;
}
