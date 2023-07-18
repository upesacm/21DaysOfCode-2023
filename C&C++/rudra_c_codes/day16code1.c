#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char line[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File '%s' not found.\n", filename);
        return 1;
    }

    printf("Contents of the file:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}

