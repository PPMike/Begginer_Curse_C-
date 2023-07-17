#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double agpa){
            name = aName;
            major = aMajor;
            gpa = agpa;
        }

        bool hasHonors(){
            if (gpa >=3.7){
                return true;
            }
            return false;
        }
};

int main()
{
    Student student1("Mike", "Math", 4.5);
    Student student2("Jose", "Physics", 2.0);

    cout << student2.hasHonors();
    return 0;
}