#include <stdio.h>

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
    struct Book book;
    
    printf("Enter the book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    
    printf("Enter the author name: ");
    fgets(book.author, sizeof(book.author), stdin);
    
    printf("Enter the publication year: ");
    scanf("%d", &book.publicationYear);
    
    // Consume the newline character
    getchar();
    
    printf("\nBook Details:\n");
    displayBookDetails(book);
    
    return 0;
}

