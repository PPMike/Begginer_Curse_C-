#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Printf es una funci[on que nos permite imprimir en la terminal datos]
    // \n: Salta una linea 
    printf("Hello \n");
    // %d: Permite imprimir numeros
    printf("Num: %d \n", 500);
    // %f: Permite imprimir numeros de decimales o punto flotante
    printf("Pi: %f \n", 3.1416);
    // %s: Permite imprimir palabras
    printf("Mi nombre es %s \n", "EL PEPE");
    // %c: Permite imprimir letras
    printf("La primera letra del abecedario es %c \n", 'a');

    // Pueden ser combinados
    printf("Mi nombre es %s, y tengo %d años de edad \n", "Miguel", 21);
    // Puedes usar variables
    float pi = 3.1416;
    printf("Pi: %f \n", pi);
    
    return 0;
}