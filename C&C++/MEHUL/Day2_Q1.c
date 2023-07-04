#include <stdio.h>

int main() {
    int year;
    
    printf("Enter the year: ");
    scanf("%d", &year);
    
    if (year%4==0)
    {
        printf("Its and leap year");
    }
    else
    {
        printf("Its not an leap year");
    }
        
}
