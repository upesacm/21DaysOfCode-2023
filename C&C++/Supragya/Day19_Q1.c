// Q1  Implement a function to count the number of lines in a text file.
#include <stdio.h>

int countLines(FILE *file) {
    int count = 0;
    char ch;
    if (file == NULL) {
        printf("Error opening the file.\n");
        return -1;
    }
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }
    if (ch != '\n' && count > 0) {
        count++;
    }
    return count;
}

int main() {
    char filename[100];
    printf("Enter the name of the text file: ");
    scanf("%s", filename);
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    int lineCount = countLines(file);
    if (lineCount >= 0) {
        printf("Number of lines in the file: %d\n", lineCount);
    }
    fclose(file);
    return 0;
}
