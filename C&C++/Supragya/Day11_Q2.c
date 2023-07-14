// Q2 Define a structure called "Date" with members for day, month, and year. Write a function to 
// compare two dates and determine which one is earlier. 
#include<stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
int compare(struct Date d1,struct Date d2){
    if(d1.year>d2.year){
        return 1;
    }
    else if(d1.year<d2.year){
        return -1;
    }
    else {
        if(d1.month>d2.month){
            return 1;
        }
        else if(d1.month<d2.month){
            return -1;
        }
        else{
          if(d1.day>d2.day){
            return 1;
        }
        else if(d1.day<d2.day){
            return -1;
        }  
        else{
            return 0;
        }
        }
    }
}
int main(){
    struct Date d1,d2;
    printf("Enter first date (day month year)\n");
    scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
    printf("Enter second date (day month year)\n");
    scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
    int result = compare(d1,d2);
    if(result>0){
        printf("Date 2 is earlier\n");
    }
    else if(result<0){
        printf("Date 1 is earlier\n");
    }
    else{
        printf("Date 1 and Date 2 are the same\n");
    }
}
