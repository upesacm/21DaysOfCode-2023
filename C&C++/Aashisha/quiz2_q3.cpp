#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
void countVowels(char sentence[], int counts[][2], int index) {
    if (sentence[index] == '\0') {
                return;
    }
    switch (sentence[index]) {
        case 'A':
            counts[0][0]++;
            break;
        case 'E':
            counts[1][0]++;
            break;
        case 'I':
            counts[2][0]++;
            break;
        case 'O':
            counts[3][0]++;
            break;
        case 'U':
            counts[4][0]++;
            break;
        case 'a':
            counts[0][1]++;
            break;
        case 'e':
            counts[1][1]++;
            break;
        case 'i':
            counts[2][1]++;
            break;
        case 'o':
            counts[3][1]++;
            break;
        case 'u':
            counts[4][1]++;
            break;
    }
    countVowels(sentence, counts, index + 1);
}

int main() {
    char sentence[MAX_LENGTH];
    int counts[5][2] = {{0}};
    fgets(sentence, sizeof(sentence), stdin);
    if (strlen(sentence) > 0 && sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0';
    }
    countVowels(sentence, counts, 0);
    printf("Count\n");
    printf("A-%d\n", counts[0][0]);
    printf("a-%d\n", counts[0][1]);
    printf("E-%d\n", counts[1][0]);
    printf("e-%d\n", counts[1][1]);
    printf("I-%d\n", counts[2][0]);
    printf("i-%d\n", counts[2][1]);
    printf("O-%d\n", counts[3][0]);
    printf("o-%d\n", counts[3][1]);
    printf("U-%d\n", counts[4][0]);
    printf("u-%d\n", counts[4][1]);
    return 0;
}
