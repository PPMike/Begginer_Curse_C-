#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Suma de numeros enteros
    printf("%d\n", 15 + 21);
    // Resta de numeros enteros
    printf("%d\n", 15 - 21);
    // Multiplicacion entre numeros flotantes (float)
    printf("%f\n", 15.1235 * 21.5738);
    // Division entre numeros flotantes
    printf("%f\n", 15 - 21);

    // Puedes usar funciones para operaciones mas complejas
    // Potencia
    printf("%d\n",  pow(2,3)); // 2 elevado al cubo
    // Raiz
    printf("%f\n",  sqrt(8)); // raiz cuadrada de 8
    // Redondeo hacia
    printf("%f\n", ceil(3.1416)); // Redondea hasta el numero entero siguiente por lo que se quedara en 4
    printf("%f\n", floor(3.1416)); // Redondea hasta el numero entero anterior por lo que se quedara en 3

    return 0;
}