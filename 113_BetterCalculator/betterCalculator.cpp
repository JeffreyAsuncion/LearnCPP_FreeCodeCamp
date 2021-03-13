#include <iostream>

using namespace std;

int main()
{
    // this calculator will have four functions
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    int result;
    if(op == '+'){
        result = num1 + num2;
    } else if(op == '-'){
        result = num1 - num2;
    } else if(op == '*'){
        result = num1 * num2;
    } else if(op == '/'){
        result = num1 / num2;
    } else {
        cout << "\nInvalid Operator!\n";
    }

    cout << "\n";
    cout << num1 << " " << op << " " << num2 << "  = ";
    cout << result << endl;

    return 0;
}