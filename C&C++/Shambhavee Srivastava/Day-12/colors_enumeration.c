#include <stdio.h>

enum colors{
    Red,
    Green,
    Blue,
    Pink,
    Orange,
    Cyan,
    Coral,
    Brown
};
int main(){
    int choice;
    
    printf("Enter your favorite color:\n");
    printf("0 - For Red\n");
    printf("1 - For Green\n");
    printf("2 - For Blue\n");
    printf("3 - For Pink\n");
    printf("4 - For Orange\n");
    printf("5 - For Cyan\n");
    printf("6 - For Coral\n");
    printf("7 - For Brown\n");
    printf("Choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case Red:
            printf("Your favorite color is Red!\n");
            break;
        case Green:
            printf("Your favorite color is Green!\n");
            break;
        case Blue:
            printf("Your favorite color is Blue!\n");
            break;
        case Pink:
            printf("Your favorite color is Pink!\n");
            break;
        case Orange:
            printf("Your favorite color is Orange!\n");
            break;
        case Cyan:
            printf("Your favorite color is Cyan!\n");
            break;
        case Coral:
            printf("Your favorite color is Coral!\n");
            break;
        case Brown:
            printf("Your favorite color is Brown!\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
}