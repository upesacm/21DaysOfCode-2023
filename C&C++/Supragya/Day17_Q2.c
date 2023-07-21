// Q2  Create a program to split a sentence into words and count the number of words using string functions.
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[1000];
    int count = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        count++;
        word = strtok(NULL, " ");
    }
    printf("Number of words in the sentence: %d\n", count);

}
