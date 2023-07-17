#include <iostream>

using namespace std;

int power(int base, int pow){
    int result = 1;
    for(int i = 1; i<=pow; i++){
        result = result * base;
    }

    return result;
}

int main()
{
    int base, pow;
    cout << "Introduce your number: ";
    cin >> base;
    cout << "Introduce your power: ";
    cin >> pow;
    int result = power(base, pow);
    cout << "Your result is: " << result;

    return 0;
}