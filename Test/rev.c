#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void rev(char *s)
{
    if (*s == '\0')
        return;
    else
        rev(s + 1);

    printf("%s\n", s);
    printf("0\n");
}

// void print(char *s)
// {
//     if (*s == '\0')
//         return;
//     else{
//         _putchar(*s);
//         print(s + 1);
//     }
// }

int len(char *s)
{
    if (*s == '\0')
        return 0;
    else
        return 1 + len(s + 1);
}

int main()
{
    char a[] = "Hello World\n";
    
    int n = len(a);
    printf("%d", n);

    return (0);
}