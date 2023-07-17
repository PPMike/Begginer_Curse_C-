#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayHi("Mike", 40);

    return 0;
}

// Crear funciones para despues mandarlas a llamar

/*
Esta es una forma de imprimir el nombre
void sayHi()
{
    char name[10];
    printf("Introduce tu nombre: \n");
    scanf("%s", name);
    printf("Hello %s!", name);
}
*/

// O bien haces la solicitud en el main y lo mandas
void sayHi(char name[], int age)
{
    printf("Hello %s!, you are %d\n", name, age);
}