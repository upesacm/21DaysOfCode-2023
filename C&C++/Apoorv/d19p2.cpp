#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void search_word_in_file(const string& file_path, const string& word_to_search) {
    ifstream file(file_path);
    if (!file) {
        cerr << "Error: File '" << file_path << "' not found." << endl;
        return;
    }

    string line;
    int line_number = 0;
    int occurrences = 0;

    while (getline(file, line)) {
        line_number++;
        size_t pos = line.find(word_to_search);
        while (pos != string::npos) {
            occurrences++;
            pos = line.find(word_to_search, pos + 1);
        }
    }

    cout << "Occurrences of the word '" << word_to_search << "' in the file: " << occurrences << endl;
}

int main() {
    string file_path = "c:/newfolder/file.txt";
    string word_to_search = "example";
    search_word_in_file(file_path, word_to_search);
    return 0;
}
