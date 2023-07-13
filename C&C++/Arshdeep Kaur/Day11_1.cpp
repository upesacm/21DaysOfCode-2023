//Define a structure called "Book" with members for title, author, and publication year. Write a function to display the details of a book using this structure.

#include <iostream>
using namespace std;

struct Book {
    char title[100];
    int year;
    char author[100];
};

void printDetails(Book b) {

    cout << "\nDisplaying Information of the Book" << endl;
    cout << "Title: " << b.title << endl;
    cout << "Publication Year: " << b.year << endl;
    cout << "Author: " << b.author << endl;

}

int main() {

    Book b;

    cout << "Enter the title of the book: ";
    cin.get(b.title, 100);
    fflush(stdin);
    cout << "Enter the publication year of the book: ";
    cin >> b.year;
    cout << "Enter the name of the author: ";
    cin.get(b.author, 100);
    fflush(stdin);

    printDetails(b);

    return 0;
}
