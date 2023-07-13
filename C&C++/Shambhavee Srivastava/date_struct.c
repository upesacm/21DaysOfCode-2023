#include <stdio.h>
#include <string.h>

struct Date {
    int day1;
    char month1[12];
    int year1;
    int day2;
    char month2[12];
    int year2;
};

void displayEarlydate(struct Date date) {
    printf("Day: %d,", date.day1);
    printf("Month: %s,", date.month1);
    printf("Year: %d\n", date.year1);
    printf("Day: %d,", date.day2);
    printf("Month: %s,", date.month2);
    printf("Year: %d\n", date.year2);
    if(date.year2>date.year1) 
    printf("First date is earlier than second");
    else
    printf("Second date is earlier than first");
}
int main() {
    struct Date myDate;
    myDate.day1=12;
    strcpy(myDate.month1, "January");
    myDate.year1= 2018;
    myDate.day2=17;
    strcpy(myDate.month2, "May");
    myDate.year2= 2015;
    displayEarlydate(myDate);
}