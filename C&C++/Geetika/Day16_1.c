// 1. Write a program that reads a text file line by line and prints each line to the console.

#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Failed to open the file.");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
