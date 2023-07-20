// 2. Create a program to split a sentence into words and count the number of words using string functions.

#include <stdio.h>

int main() {
    char sentence[1000];
    int wordCount = 0;
    int i;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {

        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\t') {
            wordCount++;

            while (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\t' && sentence[i] != '\0') {
                i++;
            }
        }
    }

    printf("Number of words: %d\n", wordCount);

    return 0;
}
