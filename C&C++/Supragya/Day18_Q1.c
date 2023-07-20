// Q1  Write a program to swap the values of two variables using pointers.
#include<stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of a\n");
    scanf("%d",&b);
    printf("Before swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);
    swap(&a, &b);
    printf("After swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);

}
