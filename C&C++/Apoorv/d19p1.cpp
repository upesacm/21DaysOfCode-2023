#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int count_lines_in_file(const string& file_path) {
    ifstream file(file_path);
    if (!file) {
        cerr << "Error: File '" << file_path << "' not found." << endl;
        return 0;
    }

    int line_count = 0;
    string line;
    while (getline(file, line)) {
        line_count++;
    }

    return line_count;
}


int main() {
    string file_path = "c:/newfolder/file.txt";
    int num_lines = count_lines_in_file(file_path);
    cout << "Number of lines in the file: " << num_lines << endl;
    return 0;
}
