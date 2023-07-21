//2. Write a program to swap the values of two variables without using a third variable using the bitwise XOR operator.

#include<stdio.h>
 
int main() {
    int a, b;
     
    printf("Enter the value of A= ");
    scanf("%d", &a);
    printf("Enter the value of B= ");
    scanf("%d", &b);
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\nAfter Swapping\n");
    printf("A = %d\nB = %d", a, b);
    return 0;
}
