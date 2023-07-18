#include <iostream>
#include <string>
using namespace std;

constexpr int ERROR_FILE_NOT_FOUND = 1;
constexpr int ERROR_PERMISSION_DENIED = 2;

int openFile(const string& filename) {
    if (filename == "myfile.txt") {
        return 0; // File opened successfully
    } else if (filename == "restricted.txt") {
        return ERROR_PERMISSION_DENIED; // Permission denied
    }

    return ERROR_FILE_NOT_FOUND; // File not found
}

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    int errorCode = openFile(filename);
    if (errorCode != 0) {
        if (errorCode == ERROR_FILE_NOT_FOUND) {
            cout << "Error: File not found!" << endl;
        } else if (errorCode == ERROR_PERMISSION_DENIED) {
            cout << "Error: Permission denied!" << endl;
        } else {
            cout << "Error: Unknown error occurred!" << endl;
        }
        return errorCode; 
    }

   
    cout << "File opened successfully!" << endl;

    return 0; 
}
