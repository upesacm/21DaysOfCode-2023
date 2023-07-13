#include <stdio.h>

// Define the Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Function to compare two dates and determine the earlier one
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
                return 0;  // Both dates are the same
        }
    }
}

int main() {
    // Create two date objects
    struct Date date1 = {10, 5, 2022};
    struct Date date2 = {15, 3, 2022};
    
    // Compare the dates
    int result = compareDates(date1, date2);
    
    // Display the result
    if (result < 0)
        printf("Date 1 is earlier than Date 2\n");
    else if (result > 0)
        printf("Date 2 is earlier than Date 1\n");
    else
        printf("Both dates are the same\n");
    
    return 0;
}
