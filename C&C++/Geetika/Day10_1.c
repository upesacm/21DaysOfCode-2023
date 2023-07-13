// 1. Write a recursive function to calculate the Fibonacci sequence up to a given number and return the sequence as an array.

#include <stdio.h>

void Fibonacci(int n, int seq[]) {
    if (n <= 0)
        return;
    
    if (n == 1) {
        seq[0] = 0;
        return;
    }
    
    if (n == 2) {
        seq[0] = 0;
        seq[1] = 1;
        return;
    }
    
    Fibonacci(n-1, seq);
    seq[n- 1] = seq[n-2] + seq[n-3];
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    
    int seq[n];
    Fibonacci(n, seq);
    
    printf("Fibonacci sequence: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", seq[i]);
    }
    return 0;
}
