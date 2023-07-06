#include <stdio.h>

int main() {
    int num, n, r, sum=0;
    
    printf("Enter any 3 digit number: ");
    scanf("%d", &num);
    
    n = num;
    
    while (n > 0)
    {
        r = n%10;
        sum = sum+r;
        n = n/10;
    }
    
    printf("Sum of digits of number %d is %d", num, sum);
}
