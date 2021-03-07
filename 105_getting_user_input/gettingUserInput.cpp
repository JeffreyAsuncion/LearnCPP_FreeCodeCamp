#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    // for a string
    // declare the string
    string name;
    cout << "Enter your name ";
    // cin >> name; // getline(func, variable)
    getline(cin, name);
    cout << "Hello " << name << endl;


    // for a number
    // declare the int
    int age;

    // prompt the user
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;

    
    // for a char
    // declare the char
    char letter;

    // prompt the user
    cout << "Enter a letter of the alphabet : ";
    cin >> letter;
    cout << "You choose the letter " << letter << " of the alphabet." << endl;
    


    return 0;
}