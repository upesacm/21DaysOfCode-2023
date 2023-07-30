#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_ROWS 50
#define MAX_COLS 50
#define MAX_WORD_LEN 20

// Function to check if the word exists in the crossword
bool searchWord(char crossword[MAX_ROWS][MAX_COLS], int rows, int cols, int row, int col, char word[MAX_WORD_LEN], int wordLen, int x, int y) {
    // Check if the word has been found
    if (wordLen == strlen(word))
        return true;

    // Check if the current cell is out of bounds or doesn't match the word's letter
    if (row < 0 || row >= rows || col < 0 || col >= cols || crossword[row][col] != word[wordLen])
        return false;

    // Recur in all 8 possible directions
    return searchWord(crossword, rows, cols, row + x, col + y, word, wordLen + 1, x, y);
}

// Function to check if the word exists in any direction in the crossword
bool isWordInCrossword(char crossword[MAX_ROWS][MAX_COLS], int rows, int cols, char word[MAX_WORD_LEN]) {
    // Iterate through each cell in the crossword
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Search for the word in all 8 directions
            for (int x = -1; x <= 1; x++) {
                for (int y = -1; y <= 1; y++) {
                    // Skip the center cell (x=0, y=0) to avoid searching the same direction twice
                    if (x == 0 && y == 0)
                        continue;

                    // If the word is found in any direction, return true
                    if (searchWord(crossword, rows, cols, i, j, word, 0, x, y))
                        return true;
                }
            }
        }
    }

    // If the word is not found after searching the entire crossword, return false
    return false;
}

int main() {
    int rows, cols;
    char crossword[MAX_ROWS][MAX_COLS];
    char word[MAX_WORD_LEN];
    scanf("%d", &rows);
    cols=rows;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf(" %c", &crossword[i][j]);
        }
    }
    scanf("%s", word);

    if (isWordInCrossword(crossword, rows, cols, word)) {
        printf("Exists\n");
    } else {
        printf("Doesn't Exists\n");
    }

    return 0;
}
