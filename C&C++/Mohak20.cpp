//                                                              {Day-20 Programs}
//Q-1 = Write a C/C++ program that uses a global constant PI with a value of 3.14159. 
//The program should prompt the user to enter the radius of a circle, calculate the circumference using the constant, and print the result on the console.
#include <iostream>
const double PI = 3.14159;
using namespace std;
int main() {
    double radius;
    cout << "Enter the radius of the circle : ";
    cin >> radius;

    double circumference = 2 * PI * radius;

    cout << "The circumference of the circle is : " << circumference << endl;
return 0;
}
//Q-2 = Implement radix sort in C/C++ to sort an array of elements in ascending order. 
//Prompt the user to input the number of elements and the array elements. Display the sorted array on the console
#include <iostream>
#include <vector>
using namespace std;
void countingSort(vector<int>& arr, int exp);
void radixSort(vector<int>& arr);
int main() {
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements : " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    radixSort(arr);

    cout << "Sorted array (in ascending order) : ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;
return 0;
}
void countingSort(vector<int>& arr, int exp) {
    vector<int> output(arr.size());
    vector<int> count(10, 0);

    for (int num : arr)
        count[(num / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    arr = output;
}
void radixSort(vector<int>& arr) {
    int maxVal = *max_element(arr.begin(), arr.end());

    for (int exp = 1; maxVal / exp > 0; exp *= 10)
        countingSort(arr, exp);
}
