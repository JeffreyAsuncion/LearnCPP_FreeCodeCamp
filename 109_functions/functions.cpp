#include <iostream>

using namespace std;


// function signature or define function above main
void sayHi(string name, int age);


int main()
{
    cout << "Top\n";

    // call sayHi
    sayHi("Mike", 35);
    sayHi("Bob", 25);
    
    cout << "Bottom\n";

    return 0;
}

// function return nothing "void"
// passing parameter - string to a function
void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << " years old" << endl;
}