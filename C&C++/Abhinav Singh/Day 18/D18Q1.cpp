#include <iostream>
using namespace std;

// Function to swap the values of two variables using pointers
void swapValues(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 5, b = 10;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    swapValues(&a, &b);

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
