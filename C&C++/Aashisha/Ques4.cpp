#include <iostream>

int tribonacci(int n) {
    if (n == 1 || n == 2) return 0;
    if (n == 3) return 1;

    int a = 0, b = 0, c = 1, d;
    for (int i = 4; i <= n; ++i) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return c;
}

int tribonacciSum(int n) {
    if (n == 1 || n == 2) return 0;
    if (n == 3) return 1;

    int a = 0, b = 0, c = 1, d, sum = 1;
    for (int i = 4; i <= n; ++i) {
        d = a + b + c;
        sum += d;
        a = b;
        b = c;
        c = d;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;

    int nthTerm = tribonacci(n);
    int sumOfTerms = tribonacciSum(n);

    std::cout <<  nthTerm << std::endl;
    std::cout <<  sumOfTerms << std::endl;

    return 0;
}
