#include <stdio.h>
#include <stdlib.h>

int function(int num1, int num2);

int main()
{
    int num1;
    int num2;
    printf("Num 1:");
    scanf("%d", &num1);
    printf("Num 2:");
    scanf("%d", &num2);
    int x = function(num1, num2);

    printf("El resultado es: %d", x);
    // Tambien puedes imprimir el resultado con
    // printf("El resultado es: %d", function(num1, num2));
    return 0;
}

int function(int num1, int num2){
    int x = pow(num1, num2);

    return x;
}