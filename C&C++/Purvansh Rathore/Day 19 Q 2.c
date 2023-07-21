#include <stdio.h>
#include <string.h>

void search_word_in_file(const char* file_path, const char* search_word) {
    FILE* file = fopen(file_path, "r");
    if (file == NULL) {
        printf("Error opening file '%s'.\n", file_path);
        return;
    }

    char line[256];
    int line_number = 1;

    while (fgets(line, sizeof(line), file)) {
        char* word = strtok(line, " \t\n");

        while (word != NULL) {
            if (strcasecmp(search_word, word) == 0) {
                printf("'%s' found at line %d\n", search_word, line_number);
            }
            word = strtok(NULL, " \t\n");
        }

        line_number++;
    }

    fclose(file);
}

// Example usage:
int main() {
    const char* file_path = "path/to/your/text_file.txt";
    const char* search_word = "example";
    search_word_in_file(file_path, search_word);
    return 0;
}
