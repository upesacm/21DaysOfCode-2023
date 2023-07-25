#include <stdio.h>
int count_lines(const char* file_path) {
    FILE* file = fopen(file_path, "r");
    if (file == NULL) {
        return 0; 
    }
    int line_count = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            line_count++;
        }
    }
    fclose(file);
    return line_count + 1; 
}
int main() {
    const char* file_path = "path/to/your/text/file.txt";
    int line_count = count_lines(file_path);
    printf("Number of lines in the file: %d\n", line_count);
    return 0;
}
