#include <iostream>
using namespace std;

enum ErrorCode {
  ERROR_NONE = 0,
  ERROR_FILE_NOT_FOUND = 1,
  ERROR_INVALID_INPUT = 2,
  ERROR_DIVISION_BY_ZERO = 3
};

void handleErrorCode(ErrorCode errorCode) {
  switch (errorCode) {
    case ERROR_NONE:
      cout << "No error occurred." << endl;
      break;
    case ERROR_FILE_NOT_FOUND:
      cout << "Error: File not found." << endl;
      break;
    case ERROR_INVALID_INPUT:
      cout << "Error: Invalid input." << endl;
      break;
    case ERROR_DIVISION_BY_ZERO:
      cout << "Error: Division by zero." << endl;
      break;
    default:
      cout << "Unknown error code." << endl;

      break;
  }
}

ErrorCode performOperation(int a, int b) {
  if (a == 0 || b == 0)
    return ERROR_DIVISION_BY_ZERO;
  else if (a < 0 || b < 0)
    return ERROR_INVALID_INPUT;
  else
    return ERROR_NONE;
}

int main() {
  int num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  ErrorCode errorCode = performOperation(num1, num2);

  if (errorCode != ERROR_NONE)
    handleErrorCode(errorCode);
  else
    cout << "Operation performed successfully." << endl;

  return 0;
}
