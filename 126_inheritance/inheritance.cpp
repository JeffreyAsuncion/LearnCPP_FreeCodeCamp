#include <iostream>

using namespace std;

// inhertiance is where we can define a class 
// and we can define other classes and thosse classes
// can extend the functionality or inherit all functionality or attributes
// of the original class

class Chef {
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        // this function over rides the function in the base class
        void makeSpecialDish(){
            cout << "The chef makes chicken parm" << endl;
        }
};


int main()
{

    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    cout << "\n\n" << endl;

    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePasta();
    italianChef.makeSpecialDish();

    return 0;
}