#include <iostream>
#include <vector>

using namespace std;

vector<int> fibonacciSequence(int n) {
    if (n <= 0) {
        return vector<int>();
    } else if (n == 1) {
        return vector<int>({0});
    } else if (n == 2) {
        return vector<int>({0, 1});
    } else {
        vector<int> sequence = fibonacciSequence(n - 1);
        sequence.push_back(sequence[sequence.size() - 1] + sequence[sequence.size() - 2]);
        return sequence;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    vector<int> fibSeq = fibonacciSequence(num);
    cout << "Fibonacci sequence up to " << num << ":\n";
    for (int num : fibSeq) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
