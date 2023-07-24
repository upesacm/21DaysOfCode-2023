/*. Define a structure called "Book" with members for title, author, and publication year. 
Write a function to display the details of a book using this structure. */

#include <stdio.h>
typedef struct book
{
    char title[1000];
    char author[1000];
    int year;
}Book;

int main()
{
    Book b;
    printf("Enter title of the book ");
    scanf("%[^\n]%*c",&b.title);
    printf("Enter name of the author ");
    scanf("%[^\n]%*c",&b.author);
    printf("Enter year of publication\n");
    scanf("%d",&b.year);
    printf("%s\n",b.title);
    printf("%s\n",b.author);
    printf("%d",b.year);
    return 0;
}
