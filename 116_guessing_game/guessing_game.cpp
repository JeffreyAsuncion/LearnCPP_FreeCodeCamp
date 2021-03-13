#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;

    while(secretNum != guess){
        cout << "Enter guess: ";
        cin >> guess;
    }

    cout << "You win!!!\n\n" << endl;


    // do while loop
    secretNum = 5;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    while(secretNum != guess && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }

    if(outOfGuesses){
        cout << "You Lose!!!\n" << endl;
    } else {
        cout << "You win!!!\n" << endl;
    }


    return 0;
}
