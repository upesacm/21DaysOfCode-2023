
#include <stdio.h>

// Custom error codes
#define ERROR_FILE_NOT_FOUND 1
#define ERROR_INVALID_INPUT 2

// Function to perform some operation
int performOperation(int value) {
    // Example operation
    if (value < 0) {
        return ERROR_INVALID_INPUT;
    }
    return 0;
}

int main() {
    int result = performOperation(-5);

    // Handle errors based on error codes
    switch (result) {
        case ERROR_FILE_NOT_FOUND:
            printf("Error: File not found.\n");
            break;
        case ERROR_INVALID_INPUT:
            printf("Error: Invalid input.\n");
            break;
        default:
            printf("Operation completed successfully.\n");
            break;
    }

    return 0;
}
