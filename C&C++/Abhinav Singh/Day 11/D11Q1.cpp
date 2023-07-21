#include<iostream>
using namespace std;

struct Book
{
    string Title;
    string Author;
    int Pub_year;

    Book(const string& title, const string& author, int pub_year)
        : Title(title), Author(author), Pub_year(pub_year) {
    }
};

void Display(const Book& book){
    cout << "Title: " << book.Title << endl;
    cout << "Author: " << book.Author << endl;
    cout << "Publication Year: " << book.Pub_year << endl;
}

int main(){
    string Title;
    string Author;
    int Pub_year;

    cout << "Enter the book title: ";
    cin >> Title;
    cout << "Enter the book Author: ";
    cin >> Author;
    cout << "Enter the Publish year: ";
    cin >> Pub_year;

    Book book(Title, Author, Pub_year);
    Display(book);

    return 0;
}
