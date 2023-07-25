#include <iostream>
using namespace std;

int tribonacci(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    int a = 0, b = 0, c = 1, d;
    int sum = 1;

    for (int i = 3; i <= n; ++i) {
        d = a + b + c;
        sum += d;
        a = b;
        b = c;
        c = d;
    }

    return c; 
}

int tribonacci_sum(int n) {
    int sum = 1;
    for (int i = 3; i <= n; ++i) {
        sum += tribonacci(i);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    int last_term = tribonacci(n - 1);
    int sum_series = tribonacci_sum(n - 1);

    cout << last_term << endl;
    cout << sum_series << endl; 

    return 0;
}
