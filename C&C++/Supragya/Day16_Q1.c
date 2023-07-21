// Q1 Write a program that reads a text file line by line and prints each line to the console.
#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char line[1000];
    printf("Enter the file name: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
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
