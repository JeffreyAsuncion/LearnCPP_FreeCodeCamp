#include <iostream>

using namespace std;

// getMax of two nums
int getMax(int num1, int num2){
    int result;

    if(num1 > num2){
        result = num1;
    } else {
        result = num2;
    }

    return result;
}

// MaxOfThree()
int maxOfThree(int num1, int num2, int num3){
    int result;

    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

int main()
{
    cout << getMax(3, 20) << endl;
    cout << maxOfThree(4, 5, 7) << endl;

    return 0;
}