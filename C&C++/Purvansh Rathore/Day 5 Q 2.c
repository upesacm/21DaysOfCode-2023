//DAY 5

//Question 2
#include <stdio.h>

// Function to find the GCD (Greatest Common Divisor) of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // Take input from the user
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Find the LCM (Least Common Multiple) using the GCD
    int lcm = (num1 * num2) / gcd(num1, num2);

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
