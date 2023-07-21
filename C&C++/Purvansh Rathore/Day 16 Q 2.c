#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile = fopen("example.txt", "r");
    if (sourceFile == NULL) {
        perror("Error opening the source file: ");
        exit(EXIT_FAILURE);
    }

    destinationFile = fopen("example.txt", "w");
    if (destinationFile == NULL) {
        perror("Error opening the destination file: ");
        fclose(sourceFile); // Close the source file if the destination file couldn't be opened
        exit(EXIT_FAILURE);
    }

    // Copying the contents of source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
