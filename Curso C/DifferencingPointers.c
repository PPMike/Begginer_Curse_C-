#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int * pAge = &age;

    printf("%p\n", pAge); // Esto imprime la direccion
    printf("%d\n", *pAge); // Esto imprime el valor
    printf("%d\n", *&pAge); // Esto imprime el valor
    printf("%p\n", &*&pAge); // Esto imprime la direccion

    return 0;
}