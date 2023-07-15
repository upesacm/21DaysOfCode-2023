#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compareDates(struct Date date1, struct Date date2) {
    if (date1.year < date2.year)
        return -1;
    else if (date1.year > date2.year)
        return 1;
    else {
        if (date1.month < date2.month)
            return -1;
        else if (date1.month > date2.month)
            return 1;
        else {
            if (date1.day < date2.day)
                return -1;
            else if (date1.day > date2.day)
                return 1;
            else
                return 0;
        }
    }
}

int main() {
    struct Date date1, date2;
    
    printf("Enter the first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    
    printf("Enter the second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
    
    int result = compareDates(date1, date2);
    
    if (result < 0)
        printf("The first date is earlier.\n");
    else if (result > 0)
        printf("The second date is earlier.\n");
    else
        printf("Both dates are the same.\n");
    
    return 0;
}

