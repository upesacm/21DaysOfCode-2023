//                                                                                      {Day-9 Programs}
//Q-1 =  Create a function that takes an array of integers and its size as parameters, and returns the average of all the elements in the array.
#include <iostream>
using namespace std;
double avg_elements(int arr[], int size);
int main() {
    int arr[5] = {0, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    double average = avg_elements(arr, size);
    cout << "Average: " << average << endl;
    return 0;
}
double avg_elements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / size;
    return average;
}
//Q-2 =  Implement a function that takes an array of integers and its size as parameters. 
//The function should rearrange the array in such a way that all the negative numbers appear 
//just before the positive numbers while preserving the relative order of the negative and positive numbers.
#include <iostream>
using namespace std;
void rearrangeArray(int arr[], int size);
int main() {
    int arr[] = {-2, 4, -5, 1, -7, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    rearrangeArray(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
void rearrangeArray(int arr[], int size) {
    int temp[size], negIndex = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            temp[negIndex++] = arr[i];
        }
    } for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            temp[negIndex++] = arr[i];
        }
    } for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

