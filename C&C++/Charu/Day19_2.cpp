#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
void searchAndDisplayOccurrences(const string& filename, const string& targetWord) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    string word;
    int occurrences = 0;
    while (file >> word) {
        string lowercaseWord = word;
        transform(lowercaseWord.begin(), lowercaseWord.end(), lowercaseWord.begin(), ::tolower);

        string lowercaseTargetWord = targetWord;
        transform(lowercaseTargetWord.begin(), lowercaseTargetWord.end(), lowercaseTargetWord.begin(), ::tolower);

        if (lowercaseWord == lowercaseTargetWord) {
            ++occurrences;
        }
    }

    file.close();

    cout << "Occurrences of the word '" << targetWord << "': " << occurrences << endl;
}

int main() {
    string filename = "C:/Users/Charu Gupta/Desktop/21DaysOfCode-2023/C&C++/Charu/19.txt"; 
    string targetWord = "hi"; 
    searchAndDisplayOccurrences(filename, targetWord);
    return 0;
}
