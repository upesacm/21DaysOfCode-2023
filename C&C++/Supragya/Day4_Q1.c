// Q1  Write a program to determine the type of a triangle based on the lengths of its sides and print
// the result (e.g., equilateral, isosceles, scalene). Take the input of the length of sides from the User.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first side of Triangle\n");
    scanf("%d",&a);
    printf("Enter the second side of Triangle\n");
    scanf("%d",&b);
    printf("Enter the third side of Triangle\n");
    scanf("%d",&c);
    if(a==b==c){
        printf("Triangle is equilateral\n");
    }
    else if(a==b || b==c ||c==a){
        printf("Triangle is isosceles\n");
    }
    else{
        printf("Triangle is scalene\n");
    }
}
