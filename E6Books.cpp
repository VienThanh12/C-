#include<iostream>
#include <vector>
using namespace std;
typedef long long ll;

class Book {
public:
    string title;
    string author;
    int year;

public:
    Book(string title, string author, int year) {
        this->title = title;
        this->author = author;
        this->year = year;
    }
    string getTitle() {
        return title;
    }

    string getAuthor() {
        return author;
    }
    int getYear() {
        return year;
    }
};
int main(){
    vector<Book> books;

    while (true) {
        cout << "Enter book details or type 'done' to exit:" << endl;
        string title, author;
        int year;
        cout << "Title: ";
        getline(cin, title);
        if (title == "done") {
            break;
        }
        cout << "Author: ";
        getline(cin, author);
        cout << "Year: ";
        cin >> year;
        cin.ignore();
        Book book(title, author, year);
        books.push_back(book);
        cout << book.getTitle() << " added to library." << endl;
    }

    cout << "Library contents:" << endl;
    for (Book book : books) {
        cout << book.getTitle() << " by " << book.getAuthor() << " (" << book.getYear() << ")" << endl;
    }

    return 0;
}
