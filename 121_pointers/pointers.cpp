#include <iostream>

using namespace std;

/*
    cout << "Age: " << &age << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;

*/




int main()
{
    // pointers are memory addresses
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;


    // print out the memory address(pointer) of the variable
    cout << "Age: " << &age << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    cout << pAge << endl;

    // de-reference a point get its value
    cout << *pAge << endl;

    // *& de reference the pointer and gets its value
    cout << *&gpa << endl;

    return 0;
}