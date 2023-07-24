#include <bits/stdc++.h>
using namespace std;

int fileWords(const string& filename, const string& searchWord) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return -1;
    }

    int occur= 0;
    string word;
    while (file >> word) {
        if (word == searchWord) {
            occur++;
        }
    }

    file.close();
    return occur;
}

int main() {
    string file;
    cout << "Enter the name of the text file: ";
    cin >> file;

    string wordSearch;
    cout << "Enter the word to search for: ";
    cin >> wordSearch;

    int occur = fileWords(file, wordSearch);
    if (occur >= 0) {
        cout << "Occurrences of '" << wordSearch << "' in the file: " << occur << endl;
    }

    return 0;
}

