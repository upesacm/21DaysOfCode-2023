//1. Define a structure called "Book" with members for title, author, and publication year. Write a function to display the details of a book using this structure. 

#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    int year;
};

void details(struct Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Year: %d\n", book.year);
}

int main() {
    struct Book myBook;
  
    struct Book book = {
        .title = "To Kill a Mockingbird",
        .author = "Harper Lee",
        .year = 1960
    };
  
    myBook = book;
    details(myBook);
    return 0;
}
