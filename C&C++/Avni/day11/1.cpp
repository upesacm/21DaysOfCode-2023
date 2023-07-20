#include<iostream>
using namespace std;

struct Book 
{
    string title;
    string author;
    int publicationYear;
};
void displayBookDetails(const Book& book) 
{
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Publication Year: " << book.publicationYear <<endl;
}
int main() {
    Book myBook;
    myBook.title = "The Great Gatsby";
    myBook.author = "F. Scott Fitzgerald";
    myBook.publicationYear = 1925;

    displayBookDetails(myBook);

    return 0;
}