#include <stdio.h>
#include <string.h>

int countWords(char sentence[]) {
    int count = 0;
    char *word = strtok(sentence, " ");

    while (word != NULL) {
        count++;
        word = strtok(NULL, " ");
    }

    return count;
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';  // Remove newline character from input

    int wordCount = countWords(sentence);

    printf("Number of words in the sentence: %d\n", wordCount);

    return 0;
}
