#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>



void count_vowels_recursive(char *sentence, int vowel_counts[5][2]) {
    if (*sentence == '\0') {
        return;
    } else {
      
        if (*sentence == 'A' || *sentence == 'a') {
            vowel_counts[0][*sentence == 'A' ? 0 : 1]++;
        } else if (*sentence == 'E' || *sentence == 'e') {
            vowel_counts[1][*sentence == 'E' ? 0 : 1]++;
        } else if (*sentence == 'I' || *sentence == 'i') {
            vowel_counts[2][*sentence == 'I' ? 0 : 1]++;
        } else if (*sentence == 'O' || *sentence == 'o') {
            vowel_counts[3][*sentence == 'O' ? 0 : 1]++;
        } else if (*sentence == 'U' || *sentence == 'u') {
            vowel_counts[4][*sentence == 'U' ? 0 : 1]++;
        }
        count_vowels_recursive(sentence + 1, vowel_counts);
    }
}

int main() {
    char sentence[1001];
    int vowel_counts[5][2] = {0}; 

    
    fgets(sentence, sizeof(sentence), stdin);

    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0';
    }

    count_vowels_recursive(sentence, vowel_counts);

    printf("Count\n");
    printf("A-%d\n", vowel_counts[0][0]);
    printf("a-%d\n", vowel_counts[0][1]);
    printf("E-%d\n", vowel_counts[1][0]);
    printf("e-%d\n", vowel_counts[1][1]);
    printf("I-%d\n", vowel_counts[2][0]);
    printf("i-%d\n", vowel_counts[2][1]);
    printf("O-%d\n", vowel_counts[3][0]);
    printf("o-%d\n", vowel_counts[3][1]);
    printf("U-%d\n", vowel_counts[4][0]);
    printf("u-%d\n", vowel_counts[4][1]);

    return 0;
}
