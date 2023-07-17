#include <stdio.h>

#define ERR_FILE_NOT_FOUND 1
#define ERR_FILE_PERMISSION 2
#define ERR_FILE_IO 3

int openFile(const char* fname) {
    FILE* f = fopen(fname, "r");

    if (f == NULL) {
        return ERR_FILE_NOT_FOUND;
    }

    // Some other checks on the file (e.g., permission, size, etc.)
    // For simplicity, we are not implementing all checks in this example.

    fclose(f);
    return 0;
}

int main() {
    const char* filename = "non_existent_file.txt";

    int errCode = openFile(filename);

    switch (errCode) {
        case ERR_FILE_NOT_FOUND:
            printf("Error: File '%s' not found.\n", filename);
            break;
        case ERR_FILE_PERMISSION:
            printf("Error: Permission denied for file '%s'.\n", filename);
            break;
        case ERR_FILE_IO:
            printf("Error: Input/output error while accessing file '%s'.\n", filename);
            break;
        case 0:
            printf("File '%s' opened successfully.\n", filename);
            break;
        default:
            printf("Unknown error occurred.\n");
    }

    return 0;
}
