#include <iostream>

using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = true;
    if (isMale && isTall) {
        cout << "You are a male";
    } else if (isMale && !isTall){
        cout << "You are not Tall.";
    } else if (!isMale && isTall){
        cout << "You are tall but you are not a man";
    } else {
        cout << "You are not a male, and you are small";
    }

    return 0;
}