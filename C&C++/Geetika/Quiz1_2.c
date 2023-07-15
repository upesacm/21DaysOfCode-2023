//Write a program to reverse the words in a given string. 
//The program should reverse the order of the words while keeping the individual words unchanged.

#include <stdio.h>
#include <string.h>

void reverse_words(char *str) {
    int length = strlen(str);
    int start = 0;

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }


    for (int i = 0; i <= length; i++) {
        if (str[i] == ' '|| str[i] == '\0') {
            int end = i - 1;

            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }
    }
}

int main() {
    char str[] = "Hello World, I am here";
    reverse_words(str);
    printf("%s", str);
    
    return 0;
}
