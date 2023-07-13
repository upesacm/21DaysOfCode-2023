#include<stdio.h>

struct Book
{
    char Book_name[100];
    char author[100];
    char genre[100];
} theBook;

int main()
{
    printf("Enter the book details=> \n");
    printf("Enter the Book name: ");
    scanf("%s", &theBook.Book_name);
    printf("Enter the Name of author: ");
    scanf("%s", &theBook.author);
    printf("Enter the Genre of the book: ");
    scanf("%s", &theBook.genre);
    
    
    printf("The Details=> \n");
    printf("Book Name: %s", theBook.Book_name);
    printf("\nAuthor of the Book: %s", theBook.author);
    printf("\nGenre of the Book: %s", theBook.genre);
    
}
