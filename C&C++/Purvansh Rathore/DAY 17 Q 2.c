#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_words(const char *sentence) {
    int word_count = 0;
    int len = strlen(sentence);
    int i = 0;

    // Skip leading whitespaces
    while (i < len && isspace(sentence[i])) {
        i++;
    }

    while (i < len) {
        // Count the start of a new word
        if (!isspace(sentence[i])) {
            word_count++;

            // Skip to the end of the current word
            while (i < len && !isspace(sentence[i])) {
                i++;
            }
        }

        // Skip any consecutive whitespaces
        while (i < len && isspace(sentence[i])) {
            i++;
        }
    }

    return word_count;
}

int main() {
    char sentence[500];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the trailing newline character from the sentence
    int len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    int word_count = count_words(sentence);
    printf("Number of words: %d\n", word_count);

    return 0;
}
