#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "Business");

    struct Student student2;
    student1.age = 20;
    student1.gpa = 4.8;;
    strcpy( student1.name, "Timmy");
    strcpy( student1.major, "Math");

    printf("%f", student1.gpa);
    return 0;
}