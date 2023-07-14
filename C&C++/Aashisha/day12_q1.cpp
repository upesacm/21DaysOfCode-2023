/*Create an enumeration called "Colors" with constants representing different colors (Red, Green, Blue, etc.). 
Write a program that asks the user to enter their favorite color and displays a message based on their choice. */

#include <stdio.h>
enum Colors { red = 1,green,blue,yellow,purple};
int main() 
{
    enum Colors favcol;
    int colorChoice;
    printf("Enter your favorite color:\n");
    printf("1. Red\n 2. Green\n 3. Blue\n 4. Yellow\n 5. Purple\n");
    scanf("%d", &colorChoice);
    favcol = colorChoice;
        switch (favcol) {
            case red:
                printf("Your favorite color is: Red\n");
                break;
            case green:
                printf("Your favorite color is: Green\n");
                break;
            case blue:
                printf("Your favorite color is: Blue\n");
                break;
            case yellow:
                printf("Your favorite color is: Yellow\n");
                break;
            case purple:
                printf("Your favorite color is: Purple\n");
                break; 
            default:
            printf("Invalid color choice!\n");
             }
    return 0; }
