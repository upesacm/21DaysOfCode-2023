
#include <stdio.h>

int count_lines_in_file(const char* file_path) {
    FILE* file = fopen(file_path, "r");
    if (file == NULL) {
        printf("Error opening file '%s'.\n", file_path);
        return 0;
    }

    int line_count = 0;
    int ch;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            line_count++;
        }
    }

    fclose(file);
    return line_count;
}

// Example usage:
int main() {
    const char* file_path = "example.txt";
    int num_lines = count_lines_in_file(file_path);
    printf("Number of lines in the file: %d\n", num_lines);
    return 0;
}
