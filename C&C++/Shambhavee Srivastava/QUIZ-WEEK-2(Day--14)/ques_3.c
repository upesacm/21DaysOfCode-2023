#include <stdio.h>
#include <ctype.h>

#define NUM_VOWELS 5

void countVowels(const char* sentence, int vowelCounts[NUM_VOWELS][2]) {
    if (*sentence == '\0') {
        return; // Base case, end of string
    }

    char c = *sentence;
    switch (c) {
        case 'A':
            vowelCounts[0][1]++;
            break;
        case 'a':
            vowelCounts[0][0]++;
            break;
        case 'E':
            vowelCounts[1][1]++;
            break;
        case 'e':
            vowelCounts[1][0]++;
            break;
        case 'I':
            vowelCounts[2][1]++;
            break;
        case 'i':
            vowelCounts[2][0]++;
            break;
        case 'O':
            vowelCounts[3][1]++;
            break;
        case 'o':
            vowelCounts[3][0]++;
            break;
        case 'U':
            vowelCounts[4][1]++;
            break;
        case 'u':
            vowelCounts[4][0]++;
            break;
    }

    countVowels(sentence + 1, vowelCounts); // Recursive call for the next character
}

int main() {
    char sentence[1000];
    int vowelCounts[NUM_VOWELS][2] = {0}; // First dimension: vowel index, Second dimension: case (0 for lowercase, 1 for uppercase)

  
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove newline character if present

    countVowels(sentence, vowelCounts); // Start counting vowels

    printf("Count\n");
    printf("A-%d\n", vowelCounts[0][1]);
    printf("a-%d\n", vowelCounts[0][0]);
    printf("E-%d\n", vowelCounts[1][1]);
    printf("e-%d\n", vowelCounts[1][0]);
    printf("I-%d\n", vowelCounts[2][1]);
    printf("i-%d\n", vowelCounts[2][0]);
    printf("O-%d\n", vowelCounts[3][1]);
    printf("o-%d\n", vowelCounts[3][0]);
    printf("U-%d\n", vowelCounts[4][1]);
    printf("u-%d\n", vowelCounts[4][0]);

    return 0;
}
