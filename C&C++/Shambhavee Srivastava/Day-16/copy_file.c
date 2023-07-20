#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char source[100], destination[100];

    printf("Enter the name of the source file: ");
    scanf("%s", source);
    printf("Enter the name of the destination file: ");
    scanf("%s", destination);

    sourceFile = fopen(source, "r");
    if (sourceFile == NULL) {
        printf("Error opening the source file.\n");
        return 1;
    }

    destinationFile = fopen(destination, "w");
    if (destinationFile == NULL) {
        printf("Error opening the destination file.\n");
        fclose(sourceFile); 
        return 1; 
    }

    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);
    printf("File copied successfully.\n");
}
