#include <iostream>
#include <climits>

int findSecondSmallest(int arr[], int size) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main() {
    int arr[] = { 9, 2, 5, 1, 7, 6, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondSmallest = findSecondSmallest(arr, size);

    if (secondSmallest != INT_MAX) {
        std::cout << "The second smallest element is: " << secondSmallest << std::endl;
    } else {
        std::cout << "No second smallest element found." << std::endl;
    }

    return 0;
}
