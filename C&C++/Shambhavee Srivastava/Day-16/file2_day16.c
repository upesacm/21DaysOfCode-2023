#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];

    printf("Enter the name of the text file: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; 
    }

    char line[256]; 
    while (fgets(line, sizeof(line), file) != NULL) { //The fgets() function returns a pointer to the string where the input is stored. FORMAT:char *fgets (char *str, int n, FILE *stream);
        printf("%s", line);
    }
    fclose(file);

    return 0; 
}
