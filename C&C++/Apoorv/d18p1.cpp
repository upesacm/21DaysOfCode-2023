#include <iostream>

using namespace std;

// Function to swap the values of two variables using pointers
void swapUsingPointers(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1, num2;

    // Input the two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Display the original values
    cout << "\nOriginal values:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    // Call the function to swap the values using pointers
    swapUsingPointers(&num1, &num2);

    // Display the swapped values
    cout << "\nSwapped values:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}
