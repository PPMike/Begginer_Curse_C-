#include <iostream>
using namespace std;

// Funcionan como reglas que tienen que ser cumplidas por las clases
class AEmployee{
     // Esta funcion es obligatoria, significa que si se quiere utilizar la clase, obligatoriamente
     // tiene que responder la funcion
    virtual void AskForPromotion()=0;
};

class Employee:AEmployee {
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
        void AskForPromotion(){
            if(Age>30){
                cout<<Name<<" Got Promoted!"<<endl;
            } else{
                cout<<Name<<" sorry, your are NOT promoted!"<<endl;
            }
        }
        /* Esto es un constructor, ya que nos permite llenar los datos
           al momento de crear la variable */
        Employee(string aName, string aCompany, int aAge){
            Name = aName;
            Company = aCompany;
            Age = aAge;
        }
};

// Developer es una subclase que cargara sus funciones a Employee la clase principal
class Developer:public Employee {
    public:
        string ProgramLenguage;
        // Aqui utilizamos variables creadas en la clase principal, por lo que la mandamos a llamar
        Developer(string aName, string aCompany, int aAge, string aProgramLenguage)
        :Employee(aName, aCompany, aAge){
            ProgramLenguage = aProgramLenguage;
        }
        void FixBug(){
            cout << getName() << " fixed bug using "<< ProgramLenguage << endl;
        }
};

// Herencia es poder usar variables de la clase principal en las secundarias
class Teacher:public Employee {
    public:
        string Subject;
        void PrepareLesson(){
            cout<<getName()<<" is preparing the lesson on"<<Subject<<endl;
        }
        Teacher(string aName, string aCompany, int aAge, string aSubject)
        :Employee(aName, aCompany, aAge){
            Subject = aSubject;
        }
};
int main()
{

    Employee employee1("Peponcio", "AIST", 21);
    employee1.setCompany("SIDEC");
    employee1.IntroduceYourself();

    cout << "------------------------------" << endl;

    Employee employee2("Pandyta", "John Deere", 21);
    employee2.setAge(35);
    employee2.IntroduceYourself();

    cout << "------------------------------" << endl;

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    cout << "------------------------------" << endl;

    Developer developer1("Askur", "Pordue", 20, "Python");
    developer1.FixBug();
    developer1.AskForPromotion();

    cout << "------------------------------" << endl;

    Teacher teacher1("Coni", "Publica", 52, "Sociales");
    teacher1.IntroduceYourself();
    teacher1.PrepareLesson();
    teacher1.AskForPromotion();

    return 0;
}