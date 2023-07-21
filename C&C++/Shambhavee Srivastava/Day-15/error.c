#include <stdio.h>

typedef enum {
    ERROR_NONE = 0,
    ERROR_FILE_NOT_FOUND,
    ERROR_INVALID_INPUT,
    ERROR_PERMISSION_DENIED
} ErrorCode;

void handle_error(ErrorCode error_code) {
    switch (error_code) {
        case ERROR_NONE:
            printf("No error\n");
            break;
        case ERROR_FILE_NOT_FOUND:
            printf("Error: File not found\n");
            break;
        case ERROR_INVALID_INPUT:
            printf("Error: Invalid input\n");
            break;
        case ERROR_PERMISSION_DENIED:
            printf("Error: Permission denied\n");
            break;
        default:
            printf("Unknown error\n");
            break;
    }
}

ErrorCode check_file_existence(const char* file_path) {
    // Simulating file existence check
    if (file_path == NULL || file_path[0] == '\0') {
        return ERROR_INVALID_INPUT;
    }

    return ERROR_FILE_NOT_FOUND;
}

int main() {
    const char* file_path = "path/to/missing_file.txt";

    ErrorCode error = check_file_existence(file_path);
    handle_error(error);

    return 0;
}
