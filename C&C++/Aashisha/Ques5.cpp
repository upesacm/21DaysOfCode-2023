#include <iostream>
// Binary search function
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Element found at index 'mid'
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Element not found
}

int main() {
    int n;
    std::cin >> n;

    int arr[100];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int target;
    std::cin >> target;

    int result = binarySearch(arr, n, target);
    if (result != -1) {
        std::cout << result << std::endl;
    } else {
        std::cout << "-1" << std::endl;
    }

    return 0;
}
