//                                                           {Day-15 Programs}
//Q-1 = Write a program that uses error handling to check if a file exists. Print an error message if the file does not exist.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    
  string filename;
    cout << "Enter the name of the file to check : ";
    cin >> filename;

    ifstream file;

    try {
        file.open(filename);
        if (file.is_open()) {
            cout << "File exists and was successfully opened.\n";
            file.close();
        } else {
            throw runtime_error("Error: File not found or cannot be opened.");
        }
    } catch (const exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
//Q-2 = Implement a program that handles multiple types of errors using error codes. Define custom error codes and handle each error appropriately.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
enum ErrorCode {
    FILE_NOT_FOUND,
    FILE_CANNOT_BE_OPENED,
    OTHER_ERROR
};
void checkFile(const string& filename);
int main() {
    string filename;
    cout << "Enter the name of the file to check : ";
    cin >> filename;

    checkFile(filename);

    return 0;
}
void checkFile(const string& filename) {
    ifstream file(filename);

    if (file.is_open()) {
        cout << "File exists and was successfully opened.\n";
        file.close();
    } else {
        if (file.fail()) {
            cerr << "Error: File not found or cannot be opened. Error code : " << FILE_CANNOT_BE_OPENED << endl;
        } else {
            cerr << "Error: Some other error occurred. Error code : " << OTHER_ERROR << endl;
        }
    }
}
