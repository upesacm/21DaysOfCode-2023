// 2. Create an enumeration called "Colors" with constants representing different colors (Red, Green, Blue, etc.).
// Write a program that asks the user to enter their favorite color and displays a message based on their choice.

#include <stdio.h>

typedef enum {
    Red,
    Green,
    Blue
} Colors;

int main() {
    int colorChoice;
    
    printf("Enter your favorite color:\n");
    printf("1. Red\n");
    printf("2. Green\n");
    printf("3. Blue\n");

    scanf("%d", &colorChoice);
    
    switch (colorChoice) {
        case Red:
            printf("Your favorite color is Red!\n");
            break;
        case Green:
            printf("Your favorite color is Green!\n");
            break;
        case Blue:
            printf("Your favorite color is Blue!\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}
