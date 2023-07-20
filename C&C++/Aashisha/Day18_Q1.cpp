#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1; 
    *ptr1 = *ptr2;    
    *ptr2 = temp;     
}
int main() {
    int num1, num2;
    printf("Enter both the numbers day by day: ");
    scanf("%d %d" ,&num1, &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
