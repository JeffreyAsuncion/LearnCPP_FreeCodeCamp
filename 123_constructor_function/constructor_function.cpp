#include <iostream>

using namespace std;

// this is a blueprint/template/specification of a data type called Book
class Book {
    public:
        string title;
        string author;
        int pages;

    Book(){
        title = "No Title";
        author = "No Author";
        pages = 0;
    }
    // constructor is a function that is called 
    // whenever we create an object of a class
    Book(string aTitle, string aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;

        cout << "Creating Object" << endl;
    }

};

int main()
{
    // object is an Instance of a class

    Book book1("Harry Potter", "JK Rowling", 500);    
    // Book book1;
    // book1.title = "Harry Potter";
    // book1.author = "JK Rowling";
    // book1.pages = 500;

    Book book2("Lord of the Rings", "Tolkein", 700);
    // Book book2;
    // book2.title = "Lord of the Rings";
    // book2.author = "Tolkein";
    // book2.pages = 700;

    Book book3; // not book3() due to no parameters/arguments

    cout << book1.title << "\n" << endl;
    cout << book2.pages << "\n" << endl;
    cout << book3.author << "\n" << endl;

    return 0;
}