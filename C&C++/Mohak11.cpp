//                                                               {Day-11 Programs}
//Q-1 = Define a structure called "Book" with members for title, author, and publication year 
//and also Write a function to display the details of a book using this structure.
#include <iostream>
using namespace std;
struct Book {
    string title;
    string author;
    int publicationYear;
};
void displayBookDetails(const Book& book);
int main() {
    Book myBook;
    myBook.title = "Let Us C";
    myBook.author = "Yashavant Kanetkar";
    myBook.publicationYear = 2008;

    displayBookDetails(myBook);

    return 0;
}
void displayBookDetails(const Book& book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Publication Year: " << book.publicationYear << endl;
}
//2. Define a structure called "Date" with members for day, month, and year 
//and also Write a function to compare two dates and determine which one is earlier. 
#include <iostream>
using namespace std;
struct Date {
    int day;
    int month;
    int year;
};
bool isEarlierDate(const Date& date1, const Date& date2);
int main() {
    Date date1 = {15, 7, 2023};
    Date date2 = {20, 7, 2023};

    if (isEarlierDate(date1, date2))
        cout << "Date 1 is earlier than Date 2" << endl;
    else
        cout << "Date 2 is earlier than or equal to Date 1" << endl;

    return 0;
}
bool isEarlierDate(const Date& date1, const Date& date2) {
    if (date1.year != date2.year)
        return date1.year < date2.year;
    
    if (date1.month != date2.month)
        return date1.month < date2.month;
    
    return date1.day < date2.day;
}

