#include <iostream>

using namespace std;

int main()
{
    // declare a 2D array
    int numberGrid[3][2]={
                            {1, 2},
                            {3, 4},
                            {5, 6}
                         };
    
    cout << numberGrid[2][1] << "\n\n" << endl;

    // nested for loop
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << numberGrid[i][j] << endl;
        }
    }

    return 0;
}