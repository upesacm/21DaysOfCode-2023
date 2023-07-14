/*.Define a structure called "Date" with members for day, month, and year.
Write a function to compare two dates and determine which one is earlier. */

#include <stdio.h>
typedef struct dates
{
    int dd,mm,yy;
}Date;

int earlydate(Date d1,Date d2)
{
 if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yy ==d2.yy) //both same
    return 0;
 else if (d1.yy > d2.yy || d1.yy == d2.yy && d1.mm > d2.mm || 
           d1.yy == d2.yy && d1.mm == d2.mm && d1.dd > d2.dd)  //first date falls later
    return 1;
 else
 return 2;    //second date later
}
int main()
{
    Date d1,d2;
    printf("Enter first date ");
    scanf("%d",&d1.dd);
    printf("Enter month ");
    scanf("%d",&d1.mm);
    printf("Enter year ");
    scanf("%d",&d1.yy);
    printf("Enter second date ");
    scanf("%d",&d2.dd);
    printf("Enter month ");
    scanf("%d",&d2.mm);
    printf("Enter year ");
    scanf("%d",&d2.yy);
    
    int result= earlydate(d1,d2);
    if(result==0)
    printf("Both dates are same");
    else if(result==1)
    printf("First date falls later and second date is earlier");
    else
    printf("First date is earlier");
    return 0;
}
