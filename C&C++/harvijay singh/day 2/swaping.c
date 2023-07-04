#include <stdio.h>

void swap(int *x, int *y) {
    if (x != y) {
        *x ^= *y;
        *y ^= *x;
        *x ^= *y;
    }
}

int main() {
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    printf("Before swapping: number 1 = %d\t, number 2 = %d\t\n", n1, n2);

    swap(&n1, &n2);

    printf("After swapping: number 1 = %d\t, number 2 = %d\t\n", n1, n2);

    return 0;
}
