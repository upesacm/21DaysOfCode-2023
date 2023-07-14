#include<iostream>

using namespace std;

struct book
{
    string title;
    string author;
    int year;
};

void display_info(struct book book_to_display)
{
    cout << "Title: " << book_to_display.title;
    cout << "\nAuthor: " << book_to_display.author;
    cout << "\nYear: " << book_to_display.year;
}

int main()
{
    book book1;

    book1.author="Vishnu Sharma";
    book1.title="Panchtantra";
    book1.year=0005;

    display_info(book1);

    return 0;
    

}









