#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    int * pAge = &age;
    double gpa = 2.7;
    string name = "Mike";

    cout << "Age address: " << &age << endl;
    // El asterisco indica leer el dato en esa direccion
    cout << "Age address: " << *pAge << endl;
    cout << "Gpa address: " << &gpa << endl;
    cout << "Name address: " << &name << endl;

    return 0;
}