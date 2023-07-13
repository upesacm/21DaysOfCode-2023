//Book Structure
#include <iostream>
#include <string>
using namespace std;

// Define the structure for Book
struct Book {
    string title;
    string author;
    int publishingYear;
};

void displayBook(const Book& a) {
    cout << "Title: " << a.title << endl;
    cout << "Author: " << a.author << endl;
    cout << "Publishing Year: " <<a.publishingYear << endl;
}

int main() {
    
    Book myBook;
    
    cout << "Enter the title of the book: ";
    cin>> myBook.title;
    
    cout << "Enter the author of the book: ";
    cin>> myBook.author;
    
    cout << "Enter the publishing year of the book: ";
    cin >> myBook.publishingYear;
    
    displayBook(myBook);
    
    return 0;
}
