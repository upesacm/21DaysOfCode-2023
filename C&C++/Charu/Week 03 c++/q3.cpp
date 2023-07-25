#include <iostream>
#include <vector>
using namespace std;

// Function to find the word in the crossword
bool findWord(const vector<vector<char>>& grid, const string& word) {
    int m = grid.size();
    int n = grid[0].size();
    int wordLength = word.length();

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j <= n - wordLength; ++j) {
            int k;
            for (k = 0; k < wordLength; ++k) {
                if (grid[i][j + k] != word[k]) {
                    break;
                }
            }
            if (k == wordLength) {
                return true;
            }
        }
    }

    for (int i = 0; i < m - wordLength + 1; ++i) {
        for (int j = 0; j < n; ++j) {
            int k;
            for (k = 0; k < wordLength; ++k) {
                if (grid[i + k][j] != word[k]) {
                    break;
                }
            }
            if (k == wordLength) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<char>> grid(m, vector<char>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    string word;
    cin >> word;

    if (findWord(grid, word)) {
        cout << "Exists" << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
