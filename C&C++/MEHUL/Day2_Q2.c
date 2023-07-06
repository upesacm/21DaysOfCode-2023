#include <stdio.h>

int main() {
    int x, y;
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    printf("Enter the value of y: ");
    scanf("%d", &y);
    
    printf("Values before swapping=> X: %d, Y: %d", x, y);
    
    x = x+y;
    y = x-y;
    x = x-y;
    
    printf("\nValues after swapping=> X: %d, Y: %d", x, y);
}
