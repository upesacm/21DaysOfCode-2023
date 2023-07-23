#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countWordOccurrencesInFile(const string& filename, const string& word) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return -1;
    }

    int wordCount = 0;
    string line;
    while (getline(file, line)) {
        size_t pos = 0;
        while ((pos = line.find(word, pos)) != string::npos) {
            wordCount++;
            pos += word.length();
        }
    }

    file.close();
    return wordCount;
}

int main() {
    string filename;
    string word;
    cout << "Enter the name of the text file: ";
    cin >> filename;
    cout << "Enter the word to search for: ";
    cin >> word;

    int occurrences = countWordOccurrencesInFile(filename, word);
    if (occurrences >= 0) {
        cout << "The word '" << word << "' occurs " << occurrences << " times in the file." << endl;
    }

    return 0;
}
