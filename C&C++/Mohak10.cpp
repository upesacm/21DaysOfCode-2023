//                                                        {Day-10 Programs}
//Q-1 =  Write a recursive function to calculate the Fibonacci sequence up to a given number and return the sequence as an array.
#include <iostream>
#include <vector>
using namespace std;
vector<int> fibonacciSequence(int n);
int main() {
    int number;
    cout << "Enter the number of Fibonacci sequence elements to generate : ";
    cin >> number;

    vector<int> sequence = fibonacciSequence(number);

    cout << "Fibonacci Sequence :";
    for (int num : sequence) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
vector<int> fibonacciSequence(int n) {
    vector<int> sequence;

    if (n <= 0) {
        return sequence;
    }
sequence.push_back(0);

    if (n == 1) {
        return sequence;
    }
sequence.push_back(1);

    for (int i = 2; i < n; i++) {
        int nextNumber = sequence[i - 1] + sequence[i - 2];
        sequence.push_back(nextNumber);
    }
return sequence;
}
//Q-2 = Implement a recursive function to check if a given array is sorted in ascending order. 
#include <iostream>
#include <vector>
using namespace std;
bool isSorted(const vector<int>& arr);
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
if (isSorted(arr)) {
        cout << "The array is sorted in \"Ascending order\"." << endl;
    } else {
        cout << "The array is not sorted in \"Ascending order\"." << endl;
    }
return 0;
}
bool isSorted(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}


