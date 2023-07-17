#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Un array de 2 dimensiones basicamente es una matriz
    int nums[3][5] = {
                    {1,3,5,7,9},
                    {2,4,6,8,0},
                    {10,20,30,40,50},
                    };   
    int i, j;
    /* Imprimir la matriz */
    for (i=0; i<=2; i++){
        for (j=0; j<=4; j++){
            printf("%d,",nums[i][j]);
        }
        printf("\n");
        j = 0;
    }

    return 0;
}