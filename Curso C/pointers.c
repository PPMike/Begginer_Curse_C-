#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Los pointers nos ayudan a identificar la direccion de memoria 
    Basicamente son una variable que guarda la direccion */
    int age;
    int * pAge = &age; // Variable Point, almacena direcciones de memoria
    double gpa = 3.4;
    double * pgpa = &gpa; // Variable Point, almacena direcciones de memoria
    char grade = 'A';
    char * pgrade = &grade; // Variable Point, almacena direcciones de memoria
    
    // El & nos permite obtener la direccion en lugar del dato
    /*
    printf("The age's memory addres is: %p\n", &age);
    printf("The gpa's memory addres is: %p\n", &gpa);
    printf("The grade's memory addres is: %p\n", &grade);
    */
    printf("The age's memory addres is: %p\n", pAge);
    printf("The gpa's memory addres is: %p\n", pgpa);
    printf("The grade's memory addres is: %p\n", pgrade);
    
    /* Resultado:
        The age's memory addres is: 0061FF1C
        The gpa's memory addres is: 0061FF10
        The grade's memory addres is: 0061FF0F
    */
    return 0;
}