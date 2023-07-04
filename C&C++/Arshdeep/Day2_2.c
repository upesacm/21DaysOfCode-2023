#include <stdio.h>

int main() {

    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    printf("The swapped value of a is %d and the swapped value of b is %d", a, b);

    return 0;
}
