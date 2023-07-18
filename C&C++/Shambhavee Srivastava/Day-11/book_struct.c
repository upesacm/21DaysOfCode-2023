#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int publicationYear;
};

void displayBookDetails(struct Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Publication Year: %d\n", book.publicationYear);
}

int main() {
    struct Book myBook;
    strcpy(myBook.title, "The Laws Of Human Nature");
    strcpy(myBook.author, "Robert Greene");
    myBook.publicationYear = 2018;
    displayBookDetails(myBook);
}