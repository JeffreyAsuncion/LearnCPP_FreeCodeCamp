#include <iostream>

using namespace std;

// assuming powNum >= 0
int power(int baseNum, int powNum){
    int result = 1;
    for(int i; i < powNum; i++){
        result = result * baseNum;
    }

    return result;
}


int main()
{
    cout << power(2, 3) << endl;

    return 0;
}