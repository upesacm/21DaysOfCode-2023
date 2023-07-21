//Write a program that reads a text file line by line and prints each line to the console.

#include <stdio.h>
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    FILE *file;
    char line[256];
    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}
