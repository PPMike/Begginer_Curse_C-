#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 
    const int num = 5; // Con el const ya no se puede modificar la variable const
    printf("%d\n",num);
    //num = 8;  Esto regresa un error, tendrias que cambiar el nombre de la variable
    //printf("%d\n",num);
    return 0;
}