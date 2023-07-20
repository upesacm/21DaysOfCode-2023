//Q1  Define a structure called "Book" with members for title, author, and publication year. 
//Write a function to display the details of a book using this structure.
#include<stdio.h>
struct Book
{
    char title[100];
    char author[100];
    int publication_year;
};
void Display(struct Book b1){
    printf("Title: %s", b1.title);
    printf("Author: %s", b1.author);
    printf("Publication Year: %d\n", b1.publication_year);
}
int main(){
    struct Book b1;
    printf("Enter the book details\n");
    printf("Enter the book title\n");
    fgets(b1.title,100,stdin);
    printf("Enter the book's author \n");
    fgets(b1.author,100,stdin);
    printf("Enter the Publication Year\n");
    scanf("%d",&b1.publication_year);
    Display(b1);
}
