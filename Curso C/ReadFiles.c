#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    // Abrimos el archivo a leer en modo lectura
    FILE * fpointer = fopen("employers.txt", "r");
    for (int i=0; i<=5; i++){
        fgets(line[i], 255, fpointer);
        printf("%s",line);
    }



    // Esta linea cierra el archivo 
    fclose(fpointer);
    return 0;
}