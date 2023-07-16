#include<iostream>
using namespace std;

int main() {
    int rows, cols;

    cout<<"Enter the number of rows: "<<endl;
    cin>>rows;
    cout<<"Enter the number of columns: "<<endl;
    cin>>cols;

    
    int* array = (int*)malloc(rows * cols * sizeof(int));

    cout<<"Enter the elements of the array:"<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin>>array[i * cols + j];
        }
    }

    // Calculate the sum of all elements
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += array[i * cols + j];
        }
    }

    // Print the sum of all elements
    cout<<"Sum of all elements:"<<sum<<endl;

    // Free the dynamically allocated memory
    free(array);

    return 0;
}
