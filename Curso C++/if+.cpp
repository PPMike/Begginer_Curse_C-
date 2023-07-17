#include <iostream>

using namespace std;

int getMax(int num1, int num2, int num3){
    int result;

    if(num1 > num2 && num1 > num3){
        result = num1;
    } else if(num2 > num1 && num2 > num3){
        result = num2;
    } else if (num3 > num1 && num3 > num2){
        result = num3;
    } else {
        result = num1;
        cout << "Both numbers are equal." << endl; // This line will not execute when both
    }

    return result;
}

int main()
{
    int num1, num2, num3;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Number 3: ";
    cin >> num3;
    int maxNum = getMax(num1, num2, num3);
    cout << "The max number is: " << maxNum << endl;


    return 0;
}