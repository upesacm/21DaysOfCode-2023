//Write a program to check if a given year is a leap year or not using the logical operators.

#include <stdio.h>

int leap(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        return 1;
    else
        return 0;
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if (leap(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}
