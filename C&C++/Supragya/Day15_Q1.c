// Q1  Write a program that uses error handling to check if a file exists. 
// Print an error message if the file does not exist.
#include <stdio.h>
int main() {
    char filename[100];
    printf("Enter the file name: ");
    scanf("%s", filename);
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: The file '%s' does not exist.\n", filename);
    } else {
        printf("The file '%s' exists.\n", filename);
        fclose(file); 
    }

    return 0;
}
