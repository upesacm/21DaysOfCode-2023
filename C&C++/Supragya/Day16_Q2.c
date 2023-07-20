// Q2  Write a program that copies the contents of one file to another file.
#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[1000], destinationFilename[1000];
    char ch;
    printf("Enter the source file name: ");
    scanf("%s", sourceFilename);
    printf("Enter the destination file name: ");
    scanf("%s", destinationFilename);
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening the source file.\n");
        return 1;
    }
    destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        printf("Error opening the destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }
    printf("File copied successfully.\n");
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
