#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool searchWord(vector<vector<char>>& matrix, int rows, int cols, string word, int startRow, int startCol, int dirRow, int dirCol) {
    int wordLen = word.length();
    
    for (int i = 0; i < wordLen; i++) {
        int row = startRow + i * dirRow;
        int col = startCol + i * dirCol;
        
        if (row < 0 || row >= rows || col < 0 || col >= cols || matrix[row][col] != word[i]) {
            return false;
        }
    }
    
    return true;
}

bool searchInMatrix(vector<vector<char>>& matrix, int rows, int cols, string word) {
    if (word.empty()) {
        return true;
    }
    
    // Define all possible directions (horizontal, vertical, diagonal, both forwards and backwards)
    int directions[][2] = {{0, 1}, {1, 0}, {1, 1}, {0, -1}, {-1, 0}, {-1, -1}, {1, -1}, {-1, 1}};
    
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            for (auto dir : directions) {
                if (searchWord(matrix, rows, cols, word, row, col, dir[0], dir[1])) {
                    return true;
                }
                // Check in reverse direction
                if (searchWord(matrix, rows, cols, word, row, col, -dir[0], -dir[1])) {
                    return true;
                }
            }
        }
    }
    
    return false;
}

int main() {
    int rows, cols;
    cin >> rows;
    cin >> cols;

    vector<vector<char>> matrix(rows, vector<char>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    string word;
    cin >> word;

    if (searchInMatrix(matrix, rows, cols, word)) {
        cout << "Exists\n";
    } else {
        cout << "Non Exist\n";
    }

    return 0;
}

