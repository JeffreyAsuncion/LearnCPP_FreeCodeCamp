#include <iostream>

using namespace std;

// declare the return type 
double  cube(double num){

    double result = num * num * num;
    return result;

    cout << "Hello";  // This line never get printed out
}


int main()
{

    double answer = cube(5.0);
    cout << answer << endl;


    return 0;
}