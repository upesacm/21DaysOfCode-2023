// Write a program that copies the contents of one file to another file.

#include <stdio.h>
int main() {
    FILE *srcFile, *destinationFile;
    char ch;
    srcFile = fopen("Anshika.txt", "r");
    if (srcFile == NULL) {
        printf("Error opening the source file.\n");
        return 1;
    }
    destinationFile = fopen("Srivastava.txt", "w");
    if (destinationFile == NULL) {
        printf("Error opening the destination file.\n");
        fclose(srcFile); 
        return 1;
    }
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destinationFile);
    }
    fclose(srcFile);
    fclose(destinationFile);
    printf("File copied successfully.\n");
    return 0;
}
