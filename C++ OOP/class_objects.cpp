#include <iostream>
using namespace std;

class Employee {
    // Tambien puedes ponerlo como:
    // private:
    // protected:
    public:
        string Name;
        string Company;
        int Age;
    
        void IntroduceYourself(){
            cout << "Name: " << Name << endl;
            cout << "Company: " << Company << endl;
            cout << "Age: " << Age << endl;
        }

        /* Esto es un constructor, ya que nos permite llenar los datos
           al momento de crear la variable */
        Employee(string aName, string aCompany, int aAge){
            Name = aName;
            Company = aCompany;
            Age = aAge;
        }
};

int main()
{
    /*Employee employee1;
    employee1.Name = "Peponcio";
    employee1.Company = "AIST";
    employee1.Age = 21;*/
    Employee employee1("Peponcio", "AIST", 21);
    employee1.IntroduceYourself();

    /*Employee employee2;
    employee2.Name = "Pandyta";
    employee2.Company = "John Deere";
    employee2.Age = 21;*/
    Employee employee2("Pandyta", "John Deere", 21);
    employee2.IntroduceYourself();

    return 0;
}