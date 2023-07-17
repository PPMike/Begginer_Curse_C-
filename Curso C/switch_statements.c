#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'A';
    // Switch es un condicional como if
    switch(grade){
    case'A': // Si grade es A pasa lo siguiente
        printf("You did good!");
        break; // Termina el condicional
    case'B':
        printf("You did alright!");
        break;
    case'C':
        printf("You did poorly");
        break;
    case'D':
        printf("You did very bad");
        break;
    case'F':
        printf("You Fail!!!");
        break;
    default : // Si no es ninguna de las anteriores opciones, entonces ...
        printf("Invalid Grade");
        break;
    }
    return 0;
}