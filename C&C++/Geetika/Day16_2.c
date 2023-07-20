// 2. Write a program that copies the contents of one file to another file.

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char character;

    sourceFile = fopen("source.txt", "r");

    if (sourceFile == NULL) {
        printf("Failed to open the source file.");
        return 1;
    }

    destinationFile = fopen("destination.txt", "w");

    if (destinationFile == NULL) {
        printf("Failed to create the destination file.");
        fclose(sourceFile);
        return 1;
    }

    while ((character = fgetc(sourceFile)) != EOF) {
        fputc(character, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.");

    return 0;
}
