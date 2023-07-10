
#TASK1
#include<stdio.h>
int main() {
    int year;
    printf("enter the year you ean to check whether it is leap year or not\n");
    scanf("%d",&year);

    if(year%400==0 || year%100==0 && year%4==0) {
        printf("YOUR YEAR IS A LEAP YEAR");

    }
    else 
    printf("it is not a leap year");
    return 0;



}
#TASK2
int main() {
    int x=10;
    int y=5;

    x=x+y;
    y=x-y;
    x=x-y;
    printf("your number is swapped: x=%d,y=%d",x,y);
    return 0;
}
