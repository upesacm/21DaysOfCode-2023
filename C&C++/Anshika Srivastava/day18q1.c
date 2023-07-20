//Write a program to swap the values of two variables using pointers.
#include <stdio.h>
void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a, b;
    printf("Enter the values ");
    scanf("%d %d", &a,&b);
    printf("Before swapping a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
