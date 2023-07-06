#include <iostream>

using namespace std;

void Fibonacci(int n) {
    if (n <= 0) {
        cout << "Invalid input! Please provide a positive integer." << endl;
        return;
    }

    int prev = 0;
    int current = 1;
    cout << prev << " ";

    for (int i = 1; i < n; i++) {
        cout << current << " ";
        int next = prev + current;
        prev = current;
        current = next;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Fibonacci(number);

    return 0;
}
