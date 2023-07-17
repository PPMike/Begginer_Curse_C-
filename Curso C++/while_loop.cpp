#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    do{
        cout << "Number:" << i << endl;
        ++i;
    } while(i <=10);
    /*while(i<=10){
        cout<< "Number: " << i << endl;
        ++i; //incrementing the value of variable 'i' by one at each iteration.
    }*/


    return 0;
}