
//1. Define a structure called "Book" with members for title, author, and publication year. Write a function to display the details of 
//a book using this structure.

#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int year;


};

void displayBook(const Book& book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Year: " << book.year << endl;
}

int main() {
    Book book;

    cout << "Enter the title: ";
    getline(cin, book.title);

    cout << "Enter the author: ";
    getline(cin, book.author);

    cout << "Enter the year: ";
    cin >> book.year;


    cout << endl << "Book Details:" << endl;
    displayBook(book);

    return 0;
}
