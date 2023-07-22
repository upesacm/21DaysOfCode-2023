#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int countLinesInFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
       cerr << "Error opening file: " << filename << endl;
        return -1; 
    }

    int lineCount = 0;
    string line;
    while (getline(file, line)) {
        ++lineCount;
    }

    file.close();
    return lineCount;
}

int main() {
    string filename = "C:/Users/Charu Gupta/Desktop/21DaysOfCode-2023/C&C++/Charu/19.txt"; 
    int lines = countLinesInFile(filename);
    if (lines >= 0) {
        cout << "Number of lines in the file: " << lines << endl;
    }
    return 0;
}
