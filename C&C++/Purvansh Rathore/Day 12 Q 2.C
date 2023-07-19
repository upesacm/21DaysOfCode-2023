#include <stdio.h>

enum Colors {
    Red,
    Green,
    Blue,
    Yellow,
    Purple,
    Orange
};

int main() {
    int choice;

    printf("Enter your favorite color:\n");
    printf("0 - Red\n");
    printf("1 - Green\n");
    printf("2 - Blue\n");
    printf("3 - Yellow\n");
    printf("4 - Purple\n");
    printf("5 - Orange\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case Red:
            printf("Your favorite color is Red.\n");
            break;
        case Green:
            printf("Your favorite color is Green.\n");
            break;
        case Blue:
            printf("Your favorite color is Blue.\n");
            break;
        case Yellow:
            printf("Your favorite color is Yellow.\n");
            break;
        case Purple:
            printf("Your favorite color is Purple.\n");
            break;
        case Orange:
            printf("Your favorite color is Orange.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
