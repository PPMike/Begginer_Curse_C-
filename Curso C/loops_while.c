#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    /*
    while(i <= 10){
        printf("Index: %d\n", i);
        i = i + 1;
        // Tambien puedes usar
        // i++;
    }
    */
    // Otro forma de hacer un loop es con
    do {
        printf("Index: %d\n", i);
        i++;
    } while(i <= 5);
    
    return 0;
}