//2. Define a structure called "Date" with members for day, month, and year. Write a function to compare two dates and determine which one is earlier. 

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compareDates(struct Date date1, struct Date date2) {
    return (date1.year != date2.year) ? (date1.year < date2.year ? -1 : 1) :
           (date1.month != date2.month) ? (date1.month < date2.month ? -1 : 1) :
           (date1.day != date2.day) ? (date1.day < date2.day ? -1 : 1) : 0;
}

int main() {
    struct Date date1 = { 25, 7, 2022 };
    struct Date date2 = { 15, 7, 2022 };

    int result = compareDates(date1, date2);

    if (result < 0)
        printf("Date 1 is earlier.\n");
    else if (result > 0)
        printf("Date 2 is earlier.\n");
    else
        printf("Both dates are equal.\n");
    return 0;
}
