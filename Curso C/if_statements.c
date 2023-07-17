#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3);

int main()
{
    int num1;
    int num2;
    int num3;
    printf("Num 1:");
    scanf("%d", &num1);
    printf("Num 2:");
    scanf("%d", &num2);
    printf("Num 3:");
    scanf("%d", &num3);

    int resultado = max(num1, num2, num3);
    printf("The max number is %d", resultado);

    return 0;
}
/*
    If conditionals
    Example: if / else if / else

    AND = &&
    OR = ||
        if (3 > 2 || 3 < 5)
            True
    NOT = !
        if (!(3 > 5))
            True
*/
int max(int num1, int num2, int num3){
    int result;
    if (num1 > num2 && num1 > num3){
        result = num1;
    } else if (num2 > num1 && num2 > num3){
        result = num2;
    } else if (num3 > num1 && num3 > num2){
        result = num3;
    } else{
        printf("All the numbers are equal\n");
        result = num1;
    }

    return result;
}