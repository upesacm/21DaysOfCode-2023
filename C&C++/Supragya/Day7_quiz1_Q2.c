#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void reverse(char* str) {
    int n = strlen(str);
    int start = 0;

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (int j = start, k = i - 1; j < k; j++, k--) {
                char temp = str[j];
                str[j] = str[k];
                str[k] = temp;
            }
            start = i + 1;
        }
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[1000];
    fgets(str, 1000, stdin);
    str[strcspn(str, "\n")] = '\0';
    reverse(str);
    printf("%s\n", str);
    return 0;
}
