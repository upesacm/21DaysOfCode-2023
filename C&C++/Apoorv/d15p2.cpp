#include <iostream>
#include <stdexcept>
using namespace std;

enum ErrorCode {
    FileNotFound,
    DivisionByZero,
    InvalidInput
};

void processFile(const string& filename) {
    // Simulating file processing
    if (filename.empty()) {
        throw runtime_error("Error: File name is empty.");
    }

    // Simulating file not found error
    if (filename == "file_not_found.txt") {
        throw FileNotFound;
    }

    // Process the file
    cout << "Processing file: " << filename << endl;
}

void divideNumbers(int num1, int num2) {
    // Simulating division by zero error
    if (num2 == 0) {
        throw DivisionByZero;
    }

    // Perform division
    int result = num1 / num2;
    cout << "Result of division: " << result << endl;
}

int main() {
    try {
        string filename;
        cout << "Enter the filename: ";
        cin >> filename;

        processFile(filename);

        int num1, num2;
        cout << "Enter two numbers for division: ";
        cin >> num1 >> num2;

        divideNumbers(num1, num2);
    }
    catch (const runtime_error& e) {
        cerr << e.what() << endl;
    }
    catch (const ErrorCode& errorCode) {
        if (errorCode == FileNotFound) {
            cerr << "Error: File not found." << endl;
        }
        else if (errorCode == DivisionByZero) {
            cerr << "Error: Division by zero." << endl;
        }
        else {
            cerr << "Error: Unknown error." << endl;
        }
    }
    catch (...) {
        cerr << "Error: Unknown exception." << endl;
    }

    return 0;
}
