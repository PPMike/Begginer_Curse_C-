#include <iostream>
using namespace std;

// Esta es una clase normal
class Chef{
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

// Esta clase tiene todas las funciones de la clase Chef
class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes chicken parm" << endl;
        }


};

int main(){
    Chef chef;
    chef.makeSpecialDish();
    ItalianChef chefI;
    chefI.makeSpecialDish();
    //chefI.makePasta();

    return 0;
}