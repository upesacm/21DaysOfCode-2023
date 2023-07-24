//Implement a program that handles multiple types of errors using error codes. Define custom error codes and handle each error appropriately.

#include <iostream>
#include <stdexcept>
using namespace std;

enum class ErrorCode {
    NoError,
    DivisionByZero,
    NegativeNumber,
    Overflow
};

int divideNumbers(int dividend, int divisor, ErrorCode& error) {

    if (divisor == 0) {
        error = ErrorCode::DivisionByZero;
        return 0;
    }

    if (dividend < 0 || divisor < 0) {
        error = ErrorCode::NegativeNumber;
        return 0;
    }

    if (dividend > INT32_MAX / divisor) {
        error = ErrorCode::Overflow;
        return 0;
    }

    error = ErrorCode::NoError;
    return dividend / divisor;

}

int main() {
    int a, b;
    cout << "Enter two integers: " << endl;
    cin >> a >> b;

    ErrorCode errorCode;
    int result;

    try {

        result = divideNumbers(a, b, errorCode);

        switch (errorCode) {
            case ErrorCode::NoError:
                cout << "Result: " << result << std::endl;
                break;
            case ErrorCode::DivisionByZero:
                std::cerr << "Error: Division by zero." << std::endl;
                break;
            case ErrorCode::NegativeNumber:
                std::cerr << "Error: Negative number not allowed." << std::endl;
                break;
            case ErrorCode::Overflow:
                std::cerr << "Error: Overflow occurred." << std::endl;
                break;
        }
    } 
    
    catch (const std::exception& e) {
        std::cerr << "An unexpected error occurred: " << e.what() << std::endl;
    }

    return 0;
}
