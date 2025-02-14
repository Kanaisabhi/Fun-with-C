#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void) {
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf" ,&num1);
    printf("Enter a operation: ");
    scanf(" %c", &op);
    printf("Enter a second number: ");
    scanf("%lf" , &num2);



    if (op == '+')
    {
        printf("%f", num1 + num2);
    } else if (op == '-')
    {
        printf("%f" , num1 - num2);
    } else if (op == '*')
    {
        printf("%f", num1 * num2);

    } else if (op == '/')
    {
        printf("%f" , num1 / num2);
    }
    
    return 0;
}
