// Q2  Create an enumeration called "Colors" with constants representing different colors (Red, Green, Blue, etc.).
// Write a program that asks the user to enter their favorite color and displays a message based on their choice.
#include<stdio.h>
enum Colors{
    red,blue,green,yellow,pink,purple,black,white,orange,grey
};
int main(){
    enum Colors favorite_Color;
    printf("Enter your favorite color \n0-red\n1-blue\n2-green\n3-yellow\n4-pink\n5-purple\n6-black\n7-white\n8-orange\n9-grey\n");
    scanf("%d", &favorite_Color);
    switch (favorite_Color) {
        case red:
            printf("Your favorite color is red.\n");
            break;
        case blue:
            printf("Your favorite color is blue.\n");
            break;
        case green:
            printf("Your favorite color is green.\n");
            break;
        case yellow:
            printf("Your favorite color is yellow.\n");
            break;
        case pink:
            printf("Your favorite color is pink.\n");
            break;
        case purple:
            printf("Your favorite color is Purple.\n");
            break;
        case black:
            printf("Your favorite color is black.\n");
            break;
        case white:
            printf("Your favorite color is white.\n");
            break;
        case orange:
            printf("Your favorite color is orange.\n");
            break;
        case grey:
            printf("Your favorite color is grey.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
}
