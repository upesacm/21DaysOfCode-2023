//Write a recursive function to calculate the Fibonacci sequence up to a given number and return the sequence as an array.
#include <iostream>
#include <vector>

using namespace std;

vector<int> fibonacciSequence(int n) {
    if (n <= 0) {
        return vector<int>();
    } else if (n == 1) {
        return vector<int>{0};
    } else if (n == 2) {
        return vector<int>{0, 1};
    }

    vector<int> sequence = fibonacciSequence(n - 1);
    sequence.push_back(sequence[n - 2] + sequence[n - 3]);
    return sequence;
}

int main() {
    int num;
    cout << "Enter the number of Fibonacci sequence terms to generate: ";
    cin >> num;

    vector<int> fibonacciSeq = fibonacciSequence(num);

    cout << "Fibonacci sequence up to " << num << " terms: ";
    for (int i : fibonacciSeq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
