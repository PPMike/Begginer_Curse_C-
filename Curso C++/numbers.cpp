#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Suma
    cout << 10 + 3 << endl;
    // Resta
    cout << 10 - 3 << endl;
    // Multiplicacion
    cout << 10 * 3 << endl;
    // Division
    cout << 10.0 / 3.0 << endl;
    // Cociente
    cout << 10 % 3 << endl;

    // Combinadas
    cout << (10 + 3)/2*4 << endl;

    // Usando variables
    int wnum = 5;
    double dnum = 5.5;
    cout << wnum + dnum << endl;

    // Libreria CMATH
    // Potencia
    cout << pow(10, 3) << endl;
    // Raiz
    cout << sqrt(4) << endl;
    // Redondeo
    cout << round(10/3) << endl;
    // Redondeo hacia arriba
    cout << ceil(4.1) << endl;
    // Redondeo hacia abajo
    cout << floor(3.8) << endl;
    // Da el numero mayor
    cout << fmax(5, 9) << endl;
    // Da el numero menor
    cout << fmin(5,9) << endl;

    return 0;
}