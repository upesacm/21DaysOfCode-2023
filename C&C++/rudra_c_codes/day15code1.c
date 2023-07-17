#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File '%s' does not exist.\n", filename);
    } else {
        printf("File '%s' exists.\n", filename);
        fclose(file);
    }

    return 0;
}

