#include <stdio.h>
#include <stdlib.h>

double calculator(double num1, double num2, char op);

int main()
{
    double num1;
    double num2;
    char op;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter operator: ");
    scanf(" %c", &op);

    printf("The result is: %lf", calculator(num1, num2, op));

    return 0;
}

double calculator(double num1, double num2, char op){
    double result;

    if (op == '+'){
        result = num1 + num2;
    } else if (op == '-'){
        result = num1 - num2;
    } else if (op == '*'){
        result = num1 * num2;
    } else if (op == '/'){
        result = num1 / num2;
    } else{
        // Invalid Operator!
        printf("Invalid Operator");
        result = 0;
    }

    return result;
}