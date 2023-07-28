#include "main.h"

int _printf(char *format, ...)
{
    int count = 0, ch, i;
    char *str;
    va_list args;

    if (!format)
        return (-1);

    va_start(args, format);

    while (*format != '\0')
    {
        if (format == '%')
        {
            format++;

            if (format == '%')
            {
                _putchar('%');
                count++;
            }
            else if (format == 'c')
            {
                ch = va_arg(args, int);
                _putchar(ch);
                count++;
            }
            else if (format == 's')
            {
                str = va_arg(args, char *);
                if (!str)
                    str = "(null)";
                while (*str)
                {
                    _putchar(str);
                    str++;
                    count++;
                }
            }
        }
        else
        {
            _putchar(format);
            count++;
        }

        format++;
        
    }

    va_end(args);

    return (count);
    
}