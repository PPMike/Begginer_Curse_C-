#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Los arrays son listas con elementos que empiezan del 0 en adelante
    /*
        Si quieres puedes crear la lista indicando el tamano de la misma
        int luckyNumbers[10]; Esto Seria un array de tamano 10
    */
    int luckyNumbers[] = {4, 8, 16, 32, 64, 128, 256};
    luckyNumbers[1] = 400; // Puedes sobrescribir elementos especificos indicando el indice
    printf("%d", luckyNumbers[5]);

    // Tambien puedes usarlo con palabras o letras
    char phrase[10] = "Array";
    print("%d", phrase);

    return 0;
}