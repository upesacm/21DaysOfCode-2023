// Define a structure called "Book" with members for title, author, and publication year. Write a function to display the details of a book using this structure.

#include <stdio.h>

struct Book {
  char *title;
  char *author;
  int publication_year;
};

void display_book(struct Book book) {
  printf("Title: %s\n", book.title);
  printf("Author: %s\n", book.author);
  printf("Publication year: %d\n", book.publication_year);
}

int main() {
  struct Book book;
  book.title = "The Hitchhiker's Guide to the Galaxy";
  book.author = "Douglas Adams";
  book.publication_year = 1979;

  display_book(book);

  return 0;
}
