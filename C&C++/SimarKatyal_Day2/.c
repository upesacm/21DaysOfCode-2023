//Q1 :Write a program to check if a given year is a leap year or not using the logical operators.
#include <stdio.h>

int main()
{
    printf("Welcome to the YEAR CHECKER machine!!\n");
    int year;
    printf("Please enter the year : ");
    scanf("%d",&year);
    if (year%4 != 0) {
        printf("%d is not a leap year.",year);
    }
    else {
        printf("%d is a leap year.",year);
    }

    return 0;
}


//Q2 : Write a program to swap the values of two variables without using a third variable using the bitwise XOR operator.
#include <stdio.h>

int main()
{
    printf("Welcome to the VALUES SWAPPER machine!!\n");
    int num1, num2;
    printf("Please enter any 2 numbers : ");
    scanf("%d%d",&num1,&num2);
    
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    
    printf("Numbers entered after swapping : %d & %d.",num1,num2);
    
    return 0;
}
