//Write a program that takes an array of integers as input and calculates the sum of all elements in the array.

#include <iostream>

int main() {
    int arr[100];
    int n;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    std::cout << "Sum of all elements in the array: " << sum << std::endl;

    return 0;
}
