#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[256]; // Buffer to store each line read from the file

    // Replace "example.txt" with the path of your text file
    file = fopen(".\example.txt", "r");

    if (file == NULL) {
        perror("Error opening the file");
        exit(EXIT_FAILURE);
    }

    // Read the file line by line until the end of file (EOF) is reached
    while (fgets(line, sizeof(line), file)) {
        // Print the line to the console
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}
