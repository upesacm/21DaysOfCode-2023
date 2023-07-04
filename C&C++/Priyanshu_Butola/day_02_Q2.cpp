#include <iostream>

using namespace std;

void swap(int *a, int *b)
{

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main()
{

    int n1, n2;

    cin >> n1;
    cin >> n2;

    cout << "Before swapping the value of n1:" << n1 << " and n2:" << n2 << endl;

    swap(n1, n2);

    cout << "After swapping the value of n1:" << n1 << " and n2:" << n2 << endl;

    return 0;
}