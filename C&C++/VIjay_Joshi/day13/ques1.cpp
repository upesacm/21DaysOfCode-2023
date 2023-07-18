#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;
  
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) 
    {
        arr[i] = new int[cols];
    }


  
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++) 
    {
   for (int j = 0; j < cols; j++)
          {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            sum += arr[i][j];
        }
    }

    cout << "Sum of all elements: " << sum << endl;

  free(arr);

    return 0;
}
