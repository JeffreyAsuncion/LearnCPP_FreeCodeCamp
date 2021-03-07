#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // numbers can be positive or negative
    // whole numbers = int
    // decimal - float or double


    cout << -40.09823 << endl;

    // we can do math
    // Order of Operations  
    // PEMDAS: Parentheses, Exponents, Multiplication and Division (from left to right), Addition and Subtraction (from left to right).
    cout << "addition       5 + 7 = " << 5 + 7 << endl;
    cout << "subtraction    5 - 7 = " << 5 - 7 << endl;
    cout << "multiplication 5 * 7 = " << 5 * 7 << endl;
    cout << "division       5 / 7 = " << 5 / 7 << endl;  // integer division
    cout << "division       5.0 / 7.0 = " << 5.0 / 7.0 << endl;
    cout << "modulus        10 % 3 = " << 10 % 3 << endl;

    cout << "4 + 5 * 10 = " << 4 + 5 * 10 << endl;
    cout << "(4 + 5) * 10 = " << (4 + 5) * 10 << endl;


    // using variables and numbers
    int wholeNum = 5;
    double doubleNum = 5.5;

    // incrementing in C++
    wholeNum++;
    cout << wholeNum << endl;

    wholeNum--;
    cout << wholeNum << endl;

    wholeNum += 80;
    cout << wholeNum << endl;

    wholeNum *= 80;
    cout << wholeNum << endl;

    // Integer math
    // Integer operator Integer = Integer
    cout << 5 / 3 << endl;

    // decimal operator ??? = decimal
    cout << 5.0 / 3 << endl;


    // after #include <cmath>

    // pow(base, power)
    cout << pow(2, 5) << endl;

    // sqrt(num)
    cout << sqrt(36) << endl;

    // round(num)
    cout << round(3.6) << endl;

    // ceil(num)
    cout << ceil(3.1) << endl;

    // floor(num)
    cout << floor(3.8) << endl;

    // fmax(num1, num2)
    cout << fmax(3, 10) << endl;


    cout << "\n\n\n" << endl;

    return 0;
}