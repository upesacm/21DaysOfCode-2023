/*
In the ever-evolving realm of quantum computing, the challenge lies in creating a cutting-edge quantum algorithm that efficiently detects a given word within a 2D matrix quantum crossword puzzle. This algorithm must explore all directions, including reverse options, using the power of quantum principles like superposition and entanglement. Although practical implementation is still in its early stages, ongoing research aims to unlock the full potential of efficient quantum algorithms for this captivating problem.

Input Format

The first line contains two integers 'm' and 'n', separated by a space, representing the dimensions of the 2D matrix. 'm' is the number of rows, and 'n' is the number of columns (In this code m=n).
The next 'm' lines contain 'n' characters each, representing the elements of the crossword puzzle.
The third line contains a single string 'word', which represents the word to be searched in the crossword.
Constraints

1 <= m, n <= 100 (dimensions of the matrix)
The characters in the crossword puzzle will be lowercase letters (a-z).
The word to be searched will be a non-empty string containing only lowercase letters (a-z).
The word can appear in any direction: horizontal, vertical, or diagonal, both forwards and backwards.
Output Format

The program should output "Exists" or "Doesn't Exists", indicating whether the given word exists in the crossword puzzle or not.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool searchInDirection(vector<vector<char>>& matrix, int row, int col, string word, int dr, int dc) {
    int len = word.length();
    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 0; i < len; i++) {
        if (row < 0 || row >= m || col < 0 || col >= n || matrix[row][col] != word[i]) {
            return false;
        }

        row += dr;
        col += dc;
    }

    return true;
}

bool searchWordInMatrix(vector<vector<char>>& matrix, string word) {
    int m = matrix.size();
    int n = matrix[0].size();

    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int row = 0; row < m; row++) {
        for (int col = 0; col < n; col++) {
            for (int dir = 0; dir < 8; dir++) {
                if (searchInDirection(matrix, row, col, word, dr[dir], dc[dir])) {
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {
    int m, n;
    cin >> m >> n;
    if(n==0){
        n = m;
    }

    vector<vector<char>> matrix(m, vector<char>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    string word;
    cin >> word;

    if (searchWordInMatrix(matrix, word)) {
        cout << "Exists" << endl;
    } else {
        cout << "Doesn't Exist" << endl;
    }

    return 0;
}