//Write a program that uses error handling to check if a file exists. Print an error message if the file does not exist.

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream file;
    file.open ("file.cpp");

    if (file) {
        cout << "The file exists" << endl;
    } 
    
    else {
        cout << "Error! The file doesn't exist" << endl;
    }

    return 0;
}
