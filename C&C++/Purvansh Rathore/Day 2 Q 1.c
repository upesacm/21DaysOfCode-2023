
#include <stdio.h>
//DAY 2

//First Question

void checkLeapYear(int year)
{
     if(year%4==0 && (year%400 ==0 || year % 100 !=0))
    {
        printf("%d is a leap year.", year);
    }
    else
        printf("%d is not a leap year", year);
}

//Driver code
int main()

{  
    int year;
    printf("Enter the year number: \n");
    scanf("%d", &year);
    checkLeapYear(year);
   
    return 0;
}