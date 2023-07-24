// 2. Implement a function to search for a specific word in a text file and display its occurrences.
#include <stdio.h>
#include <string.h>

void searchWordInFile(const char *filename, const char *word) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char line[256];
    int lineNum = 1;
    int wordCount = 0;

    while (fgets(line, sizeof(line), file)) {
        char *found = strstr(line, word);
        while (found != NULL) {
            wordCount++;

            found = strstr(found + 1, word);
        }

        if (wordCount > 0) {
            printf("'%s' found in line %d, occurrences: %d\n", word, lineNum, wordCount);
            wordCount = 0;
        }

        lineNum++;
    }

    fclose(file);
}
