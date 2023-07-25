/*
In the realm of quantum computing, we endeavor to develop a recursive quantum algorithm that takes an integer n as input and computes the nth term of the "Tribonacci" sequence, along with the aggregate sum of all terms leading to the nth term. The Tribonacci sequence relies on quantum principles, where each term emerges from the intricate interplay of the three preceding terms, initialized as |0⟩, |0⟩, and |1⟩. By exploiting quantum phenomena like superposition and entanglement, the recursive quantum function processes quantum states to derive the desired nth term and the cumulative sum encompassing all previous terms. However, this undertaking necessitates overcoming quantum decoherence and error correction challenges, as well as optimizing quantum circuits to attain accurate results within the constraints of the specific quantum computing hardware employed.

Input Format

The input consists of a single line containing an integer 'n', which represents the position of the term in the Tribonacci sequence to be calculated.

Constraints

0 <= n <= 30 (The Tribonacci sequence can grow rapidly, so we limit the input to a reasonable range.)
The Tribonacci sequence is defined as follows: each term is the sum of the three preceding terms, and the first three terms are 0, 0, 1.
Output Format

The program should output two integers separated by a space:

The first integer represents the nth term of the Tribonacci sequence.
The second integer represents the sum of all the terms leading to the nth term .
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int tribonacci(int n, int& sum) {
    if (n == 0 || n == 1) {
        sum = 0;
        return 0;
    }
    if (n == 2) {
        sum = 1;
        return 1;
    }

    int term1, term2, term3;
    term1 = term2 = 0;
    term3 = 1;
    sum = 1;

    for (int i = 3; i < n; i++) {
        int currentTerm = term1 + term2 + term3;
        sum += currentTerm;

        term1 = term2;
        term2 = term3;
        term3 = currentTerm;
    }

    return term3;
}

int main() {
    int n;
    cin >> n;

    int sum;
    int nthTerm = tribonacci(n, sum);

    cout << nthTerm <<endl;
    cout << sum << endl;

    return 0;
}
