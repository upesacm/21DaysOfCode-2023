#include <stdio.h>
#include <string.h>

void searchWord(const char *filename, const char *word) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    int occurrences = 0;
    char buffer[100];

    while (fgets(buffer, sizeof(buffer), file)) {
        char *wordPtr = strstr(buffer, word);
        while (wordPtr) {
            occurrences++;
            wordPtr = strstr(wordPtr + 1, word);
        }
    }

    fclose(file);

    printf("Occurrences of the word '%s' in %s: %d\n", word, filename, occurrences);
}

int main() {
    const char *filename = "example.txt";
    const char *word = "hello";
    searchWord(filename, word);
    return 0;
}
