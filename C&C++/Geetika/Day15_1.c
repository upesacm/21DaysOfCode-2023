// 1. Write a program that uses error handling to check if a file exists. Print an error message if the file does not exist.

#include <stdio.h>

int main() {
    FILE *file;
    const char *filename = "example.txt";

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File does not exist.\n");
        return 1;
    }

    fclose(file);

    return 0;
}
