#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1, num2;

    printf("Enter the value of the first number: ");
    scanf("%d", &num1);

    printf("Enter the value of the second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping using pointers
    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
