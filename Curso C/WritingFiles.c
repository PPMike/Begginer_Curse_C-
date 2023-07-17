#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Con la siguiente linea creamos un archivo llamado employers.txt
    // En modo escritura w, para modo lectura r, para modo editar a
    FILE * fpointer = fopen("employers.txt", "w");
    fprintf(fpointer, "Hello World!!!\n");
    fprintf(fpointer, "Juan\n");
    fprintf(fpointer, "Luis\n");
    fprintf(fpointer, "Jose\n");
    fprintf(fpointer, "Sebas\n");
    fprintf(fpointer, "Askur\n");
    fprintf(fpointer, "Andres\n");


    // Esta linea cierra el archivo 
    fclose(fpointer);
    return 0;
}