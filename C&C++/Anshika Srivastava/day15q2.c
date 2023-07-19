//Implement a program that handles multiple types of errors using error codes. Define custom error codes and handle each error appropriately.

#include <stdio.h>
#define ERROR_FILE_NOT_FOUND 1
#define ERROR_PERMISSION_DENIED 2
#define ERROR_UNKNOWN 3

int main() {
    const char *filename = "anshika.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        if (errno == ENOENT) {
            printf("Error: File '%s' not found.\n", filename);
            return ERROR_FILE_NOT_FOUND;
        } 
        else if (errno == EACCES) {
            printf("Error: Permission denied for file '%s'.\n", filename);
            return ERROR_PERMISSION_DENIED;
        } 
        else {
            printf("Error: Unknown error occurred.\n");
            return ERROR_UNKNOWN;
        }
    }
    fclose(file);
    printf("File '%s' opened successfully.\n", filename);
    return 0;
}
