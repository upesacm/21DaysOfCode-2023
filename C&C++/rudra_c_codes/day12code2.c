#include <stdio.h>

typedef enum {
    Red,
    Green,
    Blue,
    Yellow,
    Orange
} Colors;

void displayMessage(Colors color) {
    switch (color) {
        case Red:
            printf("Red is a vibrant color!\n");
            break;
        case Green:
            printf("Green represents nature and freshness!\n");
            break;
        case Blue:
            printf("Blue is calming and soothing!\n");
            break;
        case Yellow:
            printf("Yellow brings joy and optimism!\n");
            break;
        case Orange:
            printf("Orange is energetic and warm!\n");
            break;
        default:
            printf("Unknown color!\n");
            break;
    }
}

int main() {
    int choice;
    printf("Enter your favorite color (0-4):\n");
    printf("0 - Red\n");
    printf("1 - Green\n");
    printf("2 - Blue\n");
    printf("3 - Yellow\n");
    printf("4 - Orange\n");
    scanf("%d", &choice);

    displayMessage(choice);

    return 0;
}

