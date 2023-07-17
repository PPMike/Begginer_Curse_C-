#include <stdio.h>
#include <stdlib.h>

// For loops are like while
int main()
{
    //En la siguiente linea lo que hace es que empieza un loop en 1
    //Cada vuelta suma 1 a i
    //Cuando llegue i a 5 se detendra 
    /*
    for( int i = 1; i<= 5; i++){
        printf("%d\n", i);
    }
    */

   int luckyNumbers[] = {4,8,16,32,64,128,256};
   for (int i = 0; i<=6; i++){
    printf("%d\n", luckyNumbers[i]);
   }

    return 0;
}