#include <stdio.h>

// Define the Book structure
struct Book {
    char title[100];
    char author[100];
    int publicationYear;
};

// Function to display the details of a book
void displayBookDetails(struct Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Publication Year: %d\n", book.publicationYear);
}

int main() {
    // Create a book object
    struct Book myBook;
    
    // Assign values to the members of the book object
    strcpy(myBook.title, "The Great Gatsby");
    strcpy(myBook.author, "F. Scott Fitzgerald");
    myBook.publicationYear = 1925;
    
    // Display the details of the book
    displayBookDetails(myBook);
    
    return 0;
}
