#include <iostream>

using namespace std;

enum ErrorCode {
    NO_ERROR = 0,
    FILE_NOT_FOUND = 1,
    INVALID_INPUT = 2,
};

void handleError(ErrorCode code) {
    switch (code) {
        case NO_ERROR:
            cout << "No error occurred." << endl;
            break;
        case FILE_NOT_FOUND:
            cerr << "Error: File not found!" << endl;
            break;
        case INVALID_INPUT:
            cerr << "Error: Invalid input!" << endl;
            break;
        default:
            cerr << "Unknown error occurred!" << endl;
            break;
    }
}

int main() {
    ErrorCode error = FILE_NOT_FOUND;

    handleError(error);
    return 0;
}