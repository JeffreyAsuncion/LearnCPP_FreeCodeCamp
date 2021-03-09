#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // array of int
    // declare array of int and size with elements
    int luckyNums[] = {4, 8, 15, 16, 23, 42};

    // print 0th index of the array
    cout << luckyNums[0] << endl;

    // modify an element in the array
    luckyNums[0] = 19;
    cout << luckyNums[0] << endl;

    // declare array of int without elements
    int luckyNums2[100];
    cout << luckyNums2[0] << endl; // note elements not defined

    // luckyNums2[] is an empty array of length 100
    // declare the 0th element
    luckyNums2[0] = 123;
    cout << luckyNums2[0] << endl; // note elements not defined


    return 0;
}