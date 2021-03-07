#include <iostream>

using namespace std;

int main()
{
    
    cout << "Hello World!\n" << endl;
    cout << "Lamdba School" << endl;
    //       0123456789012

    string phrase = "Lambda School";
    cout << "length method : " << phrase.length() << endl; // length of phrase
    
    cout << "string Index position of [0] : " << phrase[0] << endl; // index of string begins with 0
    cout << "string Index position of [3] : " << phrase[3] << endl; 

    // assign new value to a string at a specific index
    phrase[0] = 'R'; // NOTE single quotes for a single char
    cout << phrase << endl;
    phrase[0] = 'L';
    cout << phrase << endl;

    // find() method
    cout << "School starts at index : " << phrase.find("School", 0) << endl;
    // find take 2 args ("targetString", IndexToStartSearch)
    cout << "School starts at index : " << phrase.find("School", 9) << endl; // why does this give a 18446744073709551615
    // not found because IndexToStartSearch is after the word School starts

    // substr(startingIndex, lengthSubStr) takes two parameters
    string phraseSub = phrase.substr(8, 3);
    cout << "Print subStr of phrase : " << phraseSub << endl;


    cout << "\n\n\n" << endl;
    return 0;

}