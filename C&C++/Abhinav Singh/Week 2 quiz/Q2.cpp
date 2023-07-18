#include <iostream>
#include <vector>

using namespace std;

bool checkLunarSymmetry(vector<vector<int>>& matrix, int row, int col) {
    int n = matrix.size();
    
    if (row >= n || col >= n) {
    
        return true;
    }

    if (matrix[row][col] != matrix[col][row]) {
    
        cout << "Mismatch found at position (" << row + 1 << ", " << col + 1 << ") and (" << col + 1 << ", " << row + 1 << ")" << endl;
        return false;
    }


    if (col == n - 1) {
    
        return checkLunarSymmetry(matrix, row + 1, row + 2);
    } else {
    
        return checkLunarSymmetry(matrix, row, col + 1);
    }
}

int main() {
    int n;

    cin >> n;


    vector<vector<int>> matrix(n, vector<int>(n));


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }


    bool isSymmetric = checkLunarSymmetry(matrix, 0, 1);


    if (isSymmetric) {
        cout << "The matrix is symmetric." << endl;
    } else {
        cout << "The matrix is not symmetric." << endl;
    }

    return 0;
}
