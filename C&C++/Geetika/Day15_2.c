// 2. Implement a program that handles multiple types of errors using error codes. Define custom error codes and handle each error appropriately.

#include <stdio.h>

#define ERROR_FILE_NOT_FOUND 1
#define ERROR_PERMISSION_DENIED 2
#define ERROR_UNKNOWN 3

void handleError(int errorCode) {
    switch (errorCode) {
        case ERROR_FILE_NOT_FOUND:
            printf("Error: File not found.\n");
            break;
        case ERROR_PERMISSION_DENIED:
            printf("Error: Permission denied.\n");
            break;
        default:
            printf("Error: Unknown error.\n");
            break;
    }
}

int main() {
    FILE *file;
    const char *filename = "example.txt";

    file = fopen(filename, "r");
    if (file == NULL) {
        handleError(ERROR_FILE_NOT_FOUND);
        return 1;
    }

    fclose(file);

    return 0;
}
