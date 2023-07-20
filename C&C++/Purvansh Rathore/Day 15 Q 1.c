#include <stdio.h>

int main() {
    // Replace "filename.txt" with the name of the file you want to check
    const char* filename = "filename.txt";

    // Try to open the file in read mode
    FILE* file = fopen(filename, "r");

    // Check if the file pointer is NULL, which means the file does not exist
    if (file == NULL) {
        printf("Message: File '%s' does not exist.\n", filename);
        return 1; // Return a non-zero value to indicate an error occurred
    }

    // File exists, so close it
    fclose(file);

    printf("File '%s' exists.\n", filename);

    return 0; // Return 0 to indicate successful execution
}
