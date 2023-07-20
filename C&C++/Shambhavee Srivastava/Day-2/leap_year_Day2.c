#include <stdio.h>
void leap(int);
void main() {
    int year, result;
    printf("Enter the year you want to get checked!: ");
    scanf("%d", &year);
    leap(year);
}
void leap(int year){
    if(year<0){ 
        printf("Invalid entry");
        }
    if(year%4==0){
        printf("Hurray! It's a leap year.");
    }
    else{
        printf("NO, %d is not a leap year.", year);
    }
}