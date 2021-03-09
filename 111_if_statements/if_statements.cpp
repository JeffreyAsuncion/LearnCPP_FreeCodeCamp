#include <iostream>

using namespace std;

int main()
{
    bool isActiveUser = true;
    bool isAdmin = false;

    cout << "and operator\n";
    // && and operator
    if (isActiveUser && isAdmin){
        cout << "You are an Active User and Admin" << endl;
    } else {
        cout << "You are NOT an Active User and NOT an Admin" << endl;
    }


    cout << "\n\nor operator\n";
    // || or operator
    if (isActiveUser || isAdmin){
        cout << "You are an Active User and Admin" << endl; 
    } else {
        cout << "You are NOT an Active User and NOT an Admin" << endl;
    }


    cout << "\n\nif - else if - else\n";
    // if - else if - else
    // || or operator
    if (isActiveUser && isAdmin){
        cout << "You are an Active User and Admin" << endl; 
    } else if (isActiveUser && !isAdmin) {
        // isActive and not isAdmin
        cout << "You are an Active User and NOT an Admin" << endl;
    } else if (!isActiveUser && isAdmin){
        cout << "You are Not an Active User and You are an Admin" << endl;
    } else {
        cout << "You are NOT an Active User and NOT an Admin" << endl;
    }


    return 0;
}