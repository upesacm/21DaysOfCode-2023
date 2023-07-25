#include <stdio.h>
#include <string.h>

void searchWordInFile(const char* filename, const char* targetWord) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file '%s'\n", filename);
        return;
    }
    int occurrences = 0;
    char word[100]; 
    while (fscanf(file, "%s", word) != EOF) {
        if (strcmp(word, targetWord) == 0) {
            occurrences++;
        }
    }

    fclose(file);
    if (occurrences == 0) {
        printf("The word '%s' was not found in the file.\n", targetWord);
    } else {
        printf("The word '%s' was found %d time(s) in the file.\n", targetWord, occurrences);
    }
}

int main() {
    const char* filename = "your_text_file.txt"; 
    const char* targetWord = "your_target_word"; 

    searchWordInFile(filename, targetWord);
}
