#include <iostream>

using namespace std;

double sayHi(double num1, double num2)
{
    double x = num1 + num2;
    return x;
}

int main()
{
    double num1, num2;
    cin >> num1 >> num2;
    cout << "El resultado es: " << sayHi(num1, num2) << endl;

    return 0;
}