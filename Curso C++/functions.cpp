#include <iostream>

using namespace std;

void sayHi(string name, int age)
{
    cout << "Hello "<< name << ", Do you are "<< age << " years old?" << endl;
}

int main()
{
    int age;
    string name;
    cin >> name >> age;
    sayHi(name, age);

    return 0;
}