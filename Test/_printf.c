#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - using _putchar to print
 *
 * c - caharacter input
 * Return: 
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}


void _char(char c)
{
    _putchar(c);
}




void _string(char *s)
{
    int j;
    
    for (j = 0; s[j]; j++)
    {
        _putchar(s[j]);
    }
}

void _printf(char *str, char x, char *y)
{
    //char buffer[1024];
    int i, j = 1;
    
    for (i = 0; str[i];)
    {
        if (str[i] == '%')
        {
            if(str[i + j] == ' ')
                j++;
            else if(str[i + j] == 'c')
            {
                _char(x);
                i += j + 1;
                j = 1;
            }
            else if (str[i + j] == 's')
            {
                _string(y);
                i += j + 1;
                j = 1;
            }
        }
        else
        {
          _putchar(str[i]);
          i++;
        }
    }
    
}




int main() {
    char *s = "sam";
    char n = 'n';
    
    
    _printf("my name has a % c and its %   s", n, s);
    return 0;
}