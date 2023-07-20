#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int count[10] = {0};

    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        char c = sentence[i];

        if (c == 'A') {
            count[0]++;
        } else if (c == 'E') {
            count[1]++;
        } else if (c == 'I') {
            count[2]++;
        } else if (c == 'O') {
            count[3]++;
        } else if (c == 'U') {
            count[4]++;
        } else if (c == 'a') {
            count[5]++;
        } else if (c == 'e') {
            count[6]++;
        } else if (c == 'i') {
            count[7]++;
        } else if (c == 'o') {
            count[8]++;
        } else if (c == 'u') {
            count[9]++;
        }
    }

    printf("Count\n");
    printf("A-%d\n", count[0]);
    printf("a-%d\n", count[5]);
    printf("E-%d\n", count[1]);
    printf("e-%d\n", count[6]);
    printf("I-%d\n", count[2]);
    printf("i-%d\n", count[7]);
    printf("O-%d\n", count[3]);
    printf("o-%d\n", count[8]);
    printf("U-%d\n", count[4]);
    printf("u-%d\n", count[9]);

    return 0;
}
