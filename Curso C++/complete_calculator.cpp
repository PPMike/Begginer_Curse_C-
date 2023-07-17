#include <iostream>

using namespace std;

int calculator(int num1, int num2, char op){
    int result;
    if (op == '+'){
        result=num1+num2;
    } else if (op == '-'){
        result=num1-num2;
    } else if (op == '*'){
        result=num1*num2;
    } else if (op == '/'){
        result=num1/num2;
    } else if (op == '%'){
        result=num1%num2;
    } else {
        cout << "Invalid Operator" << endl;
    }

    return result;
}
int main()
{
    int num1, num2;
    char op;
    cout << "Introduce number 1: ";
    cin >> num1;
    cout << "Introduce operator: ";
    cin >> op;
    cout << "Introduce number 2: ";
    cin >> num2;
    int result = calculator(num1, num2, op);
    cout << "El resultado es: " << result << endl;

    return 0;
}