#include <iostream>

using namespace std;

int main()
{
    // check that condition does not cause an infinite loop
    int index = 1;
    while(index <= 5){
        cout << index << endl;
        index++;
    }

    cout << "\n\n";

    // do while loop
    index = 6;
    do{
        cout << index << endl;
        index++;
    } while(index <= 5);



    return 0;
}