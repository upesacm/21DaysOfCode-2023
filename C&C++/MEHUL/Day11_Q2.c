#include<stdio.h>
#include<string.h>

struct Date
{
    int day, month, year;
} day1, day2;

int main()
{
    printf("Enter the 1st date[DD:MM:YYYY]: ");
    scanf("%d %d %d", &day1.day, &day1. month, &day1.year);
    
    printf("Enter the 2nd date[DD:MM:YYYY]: ");
    scanf("%d %d %d", &day2.day, &day2. month, &day2.year);
    
    if (day1.year > day2.year)
    {
        printf("Day2 is earlier");   
    }
    else if (day2.year > day1.year)
    {
        printf("Day1 is earlier");
    }
    else if (day1.year==day2.year)
    {
       if (day1.month > day2.month)
        {
            printf("Day2 is earlier");   
        }
        else
        {
            printf("Day1 is earlier");
        } 
    }
    else if (day1.month==day2.month && day1.year==day2.year)
    {
        if (day1.day > day2.day)
        {
            printf("Day2 is earlier");   
        }
        else
        {
            printf("Day1 is earlier");
        } 
    }
}
