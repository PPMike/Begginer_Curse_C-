#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variables de ejemplo
    int age =30;
    double gpa = 3.4;
    char grade = 'A';

    /* Basicamente todo lo que guardamos en variables se encuentra en 
    una ubicacion de memoria a la que se puede acceder, la ubicacion son
    como coordenadas*/

    // Al colocar el %p podemos imprimir la coordenada fisica del dato
    // En el caso de age se encuentra ubicado en 0000001E (Hexadecimal)
    printf("Age: %p\n",age);
    // En el caso de age se encuentra ubicado en 33333333 (Hexadecimal)
    printf("GPA: %p\n",gpa);
    // En el caso de age se encuentra ubicado en 00000041 (Hexadecimal)
    printf("Grade: %p\n",grade);

    return 0;
}