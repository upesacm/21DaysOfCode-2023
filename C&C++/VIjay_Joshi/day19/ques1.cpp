#include <bits/stdc++.h>
using namespace std;

int countLines(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return -1;
    }
    int Count = 0;
    string line;
    while (getline(file, line)) 
       Count++;
    
    file.close();
    return Count;
}

int main() {
    string file;
    cout << "name of the text file: ";
    cin >> file;

    int lines = countLines(file);
    if (lines >= 0) 
        cout << "Number of lines in  file: " << lines << endl;
    
    return 0;
}
