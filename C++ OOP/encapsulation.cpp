#include <iostream>
using namespace std;

class Employee {
    // Tambien puedes ponerlo como:
    private:
        string Name;
        string Company;
        int Age;
    // protected:
    public:
        /*
            Encapsulation consiste en crear funciones para acceder y modificar
            variables privadas. Se hace mediante declaración especial del tipo
            acceso (public/private) antes de las definiciones de estas variables
            dentro de una clase.
        */
        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }
        void setAge(int age){
            if(age>=18){
                Age = age;
            } else{
                cerr << "Error! The minimum allowed age is 18."<<endl;
            }
        }
        int getAge(){
            return Age;
        }
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
    Employee employee1("Peponcio", "AIST", 21);
    employee1.setCompany("SIDEC");
    employee1.setAge(15);
    employee1.IntroduceYourself();

    Employee employee2("Pandyta", "John Deere", 21);
    employee2.IntroduceYourself();

    return 0;
}