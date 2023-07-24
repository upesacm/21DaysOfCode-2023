// Q2 Implement a program that handles multiple types of errors using error codes. Define custom error codes 
// and handle each error appropriately.
#include <stdio.h>
#define FILE_NOT_FOUND_ERROR 1
#define PERMISSION_ERROR 2
#define UNKNOWN_ERROR 3
int openFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        return FILE_NOT_FOUND_ERROR;
    }

    if (access(filename, 4) != 0) {
        fclose(file);
        return PERMISSION_ERROR;
    }
    fclose(file);
    return 0;
}

int main() {
    char filename[100];
    printf("Enter the file name: ");
    scanf("%s", filename);
    int errorCode = openFile(filename);
    switch (errorCode) {
        case 0:
            printf("File opened successfully.\n");
            break;
        case FILE_NOT_FOUND_ERROR:
            printf("Error: The file '%s' does not exist.\n", filename);
            break;
        case PERMISSION_ERROR:
            printf("Error: No permission to read the file '%s'.\n", filename);
            break;
        default:
            printf("Unknown error occurred.\n");
            break;
    }

    return 0;
}
