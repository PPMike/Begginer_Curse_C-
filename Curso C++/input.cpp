#include <iostream>

using namespace std;

int main()
{
    /*
    int age;
    cout << "Introduce tu edad: ";
    cin >> age;
    cout << "Tu edad es: " << age << endl;
    */
   
    string name;
    cout << "Introduce tu nombre: " << endl;
    getline(cin, name); // Para leer el salto de linea al final
    cout << "Mucho gusto " << name << endl;

    return 0;
}