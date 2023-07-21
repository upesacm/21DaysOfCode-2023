#include <stdio.h>

int countLines(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }

    int lineCount = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    fclose(file);
    return lineCount;
}

int main() {
    const char *filename = "example.txt";
    int lines = countLines(filename);
    if (lines >= 0) {
        printf("Number of lines in %s: %d\n", filename, lines);
    }
    return 0;
}
