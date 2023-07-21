#include <stdio.h>

int countLinesInFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file '%s'\n", filename);
        return -1; 
    }

    int lineCount = 0;
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    fclose(file);
    return lineCount;
}
int main() {
    const char* filename = "your_file.txt"; 
    int lines = countLinesInFile(filename);
    if (lines >= 0) {
        printf("Number of lines in the file: %d\n", lines);
    }
}
