#include <iostream>

using namespace std;

// this is a blueprint/template/specification of a data type called Book
class Book {
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    // object is an Instance of a class
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book1.title << "\n" << endl;
    cout << book2.pages << "\n" << endl;

    return 0;
}