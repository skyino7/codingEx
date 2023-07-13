#include <stdio.h>

/**
 * main - function
 * Description - Printing 0 - 99
 * Return: 0 when successful
*/

int main(void)
{
    int i;

    for (i = 0; i < 100; i++)
    {
        if (i < 10){
            putchar(i + '0');
            putchar(',');
            putchar(' ');
        }
        else if ( i >= 10)
        {
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');

            if (i <= 98)
                putchar(',');
                putchar(' ');

            if (i == 97)
            {
                printf("not ");
            }

        }
    }

    putchar('\n'); 
    
    return (0);
}