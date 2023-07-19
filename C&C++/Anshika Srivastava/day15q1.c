// Write a program that uses error handling to check if a file exists. Print an error message if the file does not exist.
#include <stdio.h>
int main() {
    FILE *file;
    const char *filename = "anshika.txt";
    file = fopen(filename, "r");
    
    if (file == NULL) {
        fprintf(stderr, "Error: File '%s' does not exist.\n", filename);
        return 1;
    }
    fclose(file);
    printf("File '%s' exists.\n", filename);
    return 0;
}
