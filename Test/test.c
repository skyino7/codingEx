#include <stdio.h>

/**
 * main - function
 *
 * description: Write a program that prints all single digit
 * numbers of base 10 starting from 0
 *
 * Return: 0 when successful
 */

int main(void)
{
	// char aph;

    // aph = 'a';

    // int A_1_Any_Number;

    // int num1 = 10;
    // int num2 = 10;
    // int sum;

    // sum = num1 + num2;

    // printf("Top: %d\n", sum);

    // num1 = 40; num2 = 10;

    // sum = num1 + num2;

    // printf("Down: %d\n", sum);
    // printf("%c\n", aph);

    // intialize | condition | increment
	// for (aph = 'a'; aph < 'z'; aph++)
	// {
	// 	putchar(aph);
	// }

    // putchar('\n');

    // int n = 0;

    // while (n < 10)
    // {
    //     putchar(n + '0');
    //     n++;
    // }

	// putchar('\n');

    // char a[] = "Hello";

    // printf("%s\n", a);

    // int myNumbers[] = {25, 50, 75, 100};
    // printf("%d\n", myNumbers[3]);

    // int number = 5;
    // number = 5.5;
    // double number1;

    // printf("%d\n", number);

    // putchar('a');
    // putchar('\n');

    // char a;

    // for (a = 'a'; a <= 'z'; a++)
	// {
    //     if (a != 'a' && a != 'y')
    //     {
    //         putchar(a);
    //     }

	// 	// putchar('\n');
	// }
	// putchar('\n');

    printf("Size of Integer %lu byte\n", sizeof(int));
    printf("Size of Char %lu byte\n", sizeof(char));
    printf("Size of Float %lu byte\n", sizeof(float));
    printf("Size of Double %lu byte\n", sizeof(double));
    printf("Size of Long Long Int %zu byte\n", sizeof(long long int));
    printf("Size of Long Int %zu byte\n", sizeof(long int));

	return (0);
}