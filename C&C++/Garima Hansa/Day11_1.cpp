// 1. Define a structure called "Book" with members for title, author, and publication year. Write a function to display the details of a book using this structure.

#include <iostream>
using namespace std;

struct Book
{
    char name[100];
    char author[100];
    int publication_year;
};


int main()
{

    Book one;

    cout << "Enter the name of the Book, its author and publication year" << endl;
    cin.getline(one.name, 100);
    cin >> one.author;
    cin >> one.publication_year;

    cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXXXX Book Details XXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
    cout << "Name : " << one.name << endl;
    cout << "Author : " << one.author << endl;
    cout << "Publication Year : " << one.publication_year ;
}
