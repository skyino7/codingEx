#include <stdio.h>

int main(void)
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    /*User Inputs Two Numbers*/
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 == 0 && num2 == 0)
    {
        printf("Enter Numbers Greater than Zero: ");
        scanf("%d%d", &num1, &num2);
    }
    

    /*Perform Arithmetic Operations*/
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;

    /*Print All Results From Operations*/
    printf("SUM = %d\n", sum);
    printf("DIFFERENCE = %d\n", sub);
    printf("PRODUCT = %d\n", mult);
    printf("QUOTIENT = %f\n", div);
    printf("MODULUS = %d\n", mod);

    return (0);
}