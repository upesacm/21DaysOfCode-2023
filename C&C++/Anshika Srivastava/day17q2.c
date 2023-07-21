//Create a program to split a sentence into words and count the number of words using string functions.

#include <stdio.h>
#include <string.h>
int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    scanf("%[^\n]s", sentence);
    char *words[100]; 
    int wordCount = 0; 
    char *token = strtok(sentence, " ");
    while (token != NULL && wordCount < 100) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }
    printf("Number of words %d\n", wordCount);
    printf("Words\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s\n", words[i]);
    }
    return 0;
}
