#include <stdio.h>
#include <string.h>
void search_word(const char* file_path, const char* search_word) {
    FILE* file = fopen(file_path, "r");
    if (file == NULL) {
        printf("File not found or cannot be opened.\n");
        return;
    }
    char line[256]; 
    int line_number = 1;
    int word_count = 0;
    while (fgets(line, sizeof(line), file)) {
        char* found = strstr(line, search_word);
        while (found != NULL) {
            word_count++;
            printf("Word '%s' found at line %d, position %ld.\n", search_word, line_number, found - line + 1);
            found = strstr(found + 1, search_word);
        }
        line_number++;
    }
    if (word_count == 0) {
        printf("Word '%s' not found in the file.\n", search_word);
    }
    fclose(file);
}
int main() {
    const char* file_path = "path/to/your/text/file.txt";
    const char* search_word = "your_search_word";
    search_word(file_path, search_word);
    return 0;
}
