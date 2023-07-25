#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int tribonacci(int n) {
    if ( n == 0 || n == 1 || n == 2) return 0;
    if (n == 3) return 1;
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

int cumulativeSum(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += tribonacci(i);
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int nthTerm = tribonacci(n);
    int cumSum = cumulativeSum(n);
    printf("%d\n", nthTerm);
    printf("%d", cumSum);
    return 0;
}
