#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Book
{
private:
    string title, author;
    int year;
public:
    Book(string title, string author, int year)
    {
        this->title = title;
        this->author = author;
        this->year = year;
    }

    ~Book()
    {
        cout << "In book:" + title + " destructor" << endl;
    }

    string getData()
    {
        return "Title:" + title + " Author:" + author + " Year:" + to_string(year);
    }
};

int main()
{
    Book *myBook = new Book("Winnie the Pooh", "Milne", 1950);
    Book *otherBook = new Book("The world accordind to Garp", "Irwing", 1985);
    unique_ptr<Book> book2 (new Book("hi", "kevin", 2004));
    //myBook->title = "new title"; // title is private member of class Book
    cout << book2->getData() << endl;   
    cout << myBook->getData() << endl;
    cout << otherBook->getData() << endl;
    book2.release();
    delete(myBook);
    delete(otherBook);
}
