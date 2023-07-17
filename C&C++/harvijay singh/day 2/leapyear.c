//check whether the year is leap year or not
#include <stdio.h>

void year(int x){
    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)) {
        printf("%d is a leap year.\n", x);
    } else {
        printf("%d is not a leap year.\n", x);
    }

}
int main() {
    int yr;

    printf("Enter a year: ");
    scanf("%d", &yr);
    year(yr);
    return 0;
}
