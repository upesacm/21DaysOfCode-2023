//Q1 Write a program to check if a giveyear year is a leap year or yearot using the logical operators.
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if(year%400==0 ||(year%4==0 && year%100!=0)){
        printf("It is a leap year\n");
    }
    else{
        printf("It is not a leap year\n");
    }
}
