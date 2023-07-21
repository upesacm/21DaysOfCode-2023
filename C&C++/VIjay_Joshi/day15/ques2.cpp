#include <iostream>
#include <string>
using namespace std;

enum ErrorCode {
    Success,
    FileNotFound,
    PermissionDenied,
    InvalidInput
};

void handleError(ErrorCode code) {
    switch (code) {
        case Success:
            cout << "Operation successful." << endl;
            break;
        case FileNotFound:
            cout << "Error: File not found." << endl;
            break;
        case PermissionDenied:
            cout << "Error: Permission denied." << endl;
            break;
        case InvalidInput:
            cout << "Error: Invalid input." << endl;
            break;
        default:
            cout << "Unknown error." << endl;
    }
}

ErrorCode performOperation(int input) {
    if (input < 0) {
        return InvalidInput;
    }

    if (input % 2 == 0) {
        return PermissionDenied;
    }

    if (input == 42) {
        return FileNotFound;
    }


    return Success;
}

int main() {
    int input;
    cout << "Enter an input: ";
    cin >> input;

    ErrorCode result = performOperation(input);
    handleError(result);

    return 0;
}
