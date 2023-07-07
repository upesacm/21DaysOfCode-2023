//Write a program to find the LCM (Least Common Multiple) of two numbers using a while loop.

#include <stdio.h>

int main() {
    int num1, num2;
    int lcm, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
