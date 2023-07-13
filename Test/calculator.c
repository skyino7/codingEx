#include <stdio.h>

int main()
{
    char operator;
    double first, second;

    printf("Enter The Operator (+, -, *, /)\n");
    scanf("%c", &operator);

    printf("Enter the two Numbers for calculation one by one: \n");
    scanf("%lf %lf", &first, &second);

    switch (operator)
    {
    case '+':
        printf("%.0lf + %.0lf = %.0lf\n", first, second,(first+second));
        break;

    case '-':
        printf("%.0lf - %.0lf = %.0lf\n", first, second,(first-second));
        break;

    case '*':
        printf("%.0lf * %.0lf = %.0lf\n", first, second,(first*second));
        break;

    case '/':
        if (second != 0.0)
            printf("%.2lf / %.2lf = %.2lf\n", first, second,(first/second));
        else
            printf("Divide by Zero Situation\n");
        break;
    
    default:
        printf("Invalid Calculation\n");
    }

    return (0);
}