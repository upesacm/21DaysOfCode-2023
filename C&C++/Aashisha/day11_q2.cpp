// Define a structure called "Date" with members for day, month, and year. Write a function to compare two dates and determine which one is earlier. 

#include <stdio.h>

struct Date {
  int day;
  int month;
  int year;
};

int compare_dates(struct Date date1, struct Date date2) {
  // Compare the years.
  if (date1.year < date2.year) {
    return -1;
  } else if (date1.year > date2.year) {
    return 1;
  }

  // If the years are equal, compare the months.
  if (date1.month < date2.month) {
    return -1;
  } else if (date1.month > date2.month) {
    return 1;
  }

  // If the months are equal, compare the days.
  if (date1.day < date2.day) {
    return -1;
  } else if (date1.day > date2.day) {
    return 1;
  }

  // The dates are equal.
  return 0;
}

int main() {
  struct Date date1 = {1, 1, 2023};
  struct Date date2 = {2, 1, 2023};

  int result = compare_dates(date1, date2);

  if (result == -1) {
    printf("Date1 is earlier than Date2.\n");
  } else if (result == 1) {
    printf("Date2 is earlier than Date1.\n");
  } else {
    printf("Date1 and Date2 are equal.\n");
  }

  return 0;
}
