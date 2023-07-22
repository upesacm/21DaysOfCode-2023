// Q2  Implement a function to search for a specific word in a text file and display its occurrences.
#include <stdio.h>
#include <string.h>

void searchWord(FILE *file, const char *word) {
    char line[100];
    int lineNum = 1;
    int count = 0;
    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }
    while (fgets(line, sizeof(line), file)) {
        char *ptr = line;
        while ((ptr = strstr(ptr, word))) {
            count++;
            ptr += strlen(word);
        }
        lineNum++;
    }
    printf("Word '%s' occurs %d times in the file.\n", word, count);
}

int main() {
    char filename[100];
    char word[50];
    printf("Enter the name of the text file: ");
    scanf("%s", filename);
    printf("Enter the word to search for: ");
    scanf("%s", word);
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    searchWord(file, word);
    fclose(file);
    return 0;
}
