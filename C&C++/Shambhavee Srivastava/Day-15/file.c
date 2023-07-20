#include <stdio.h>

int main() {
    FILE *file;
    char file_path[100];
    printf("Enter the file path: ");
    scanf("%s", file_path);
    file = fopen(file_path, "r");

    if (file != NULL) {
        printf("File exists!\n");
        fclose(file);
    } else {
        printf("Error: The file does not exist.\n");
    }
    return 0;
}
