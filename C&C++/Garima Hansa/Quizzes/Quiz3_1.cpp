/*
In the realm of quantum computing, we have an array of quantum particles represented as qubits. Our task is to count the pairs of quantum particles whose states sum up to a particular quantum target state. Leveraging quantum principles like superposition and entanglement, the quantum algorithm processes the array to compute the count of such pairs

Input Format

The input consists of three lines:

The first line contains an integer 'n', which represents the size of the array.
The second line contains 'n' space-separated integers, representing the elements of the array.
The third line contains a single integer 'target', which represents the target sum.
Constraints

2 <= n <= 10^5 (size of the array)
-10^9 <= Array elements <= 10^9
-10^9 <= target <= 10^9
Output Format

The function should return a single integer, which represents the count of all pairs of elements in the array whose sum is equal to the given target value.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;

   vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int count = 0;
    sort(arr.begin(), arr.end()); // Sorting the array to use two pointers approach
    int left = 0, right = size - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            count++;
            left++;
            right--;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

     cout << count << endl;

    return 0;
}
