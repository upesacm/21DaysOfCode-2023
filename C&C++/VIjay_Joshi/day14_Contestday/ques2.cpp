#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool isLunSym(const vector<vector<int>>& matrix, int row, int col,int n) {
    if (row >=n) {
        return true;
    }

    if (col >=n) {
        
        return isLunSym(matrix, row + 1, 0,n);
    }

    if (matrix[row][col] != matrix[col][row]) {
      cout << "Mismatch found at position (" << row + 1 << ", " << col + 1 << ") and (" << col + 1 << ", " << row + 1 << ")" << endl;
        return false;
    }

   
    return isLunSym(matrix, row, col + 1,n);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    
    vector<vector<int>> lunar(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>lunar[i][j];
        }
    }
    
    
    
    if (isLunSym(lunar,0,1,n)) {
        cout << "The matrix is symmetric." << endl;
    } else {
        cout << "The matrix is not symmetric." << endl;
    }
    
    return 0;
}
