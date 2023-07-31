#include <stdio.h>

int main(int argc, char const *argv[], char **var_ptr)
{
    int i = 0;

    printf("cmd line args count=%d\n", argc);

    printf("Exe name=%s\n", argv[0]);

    for (i = 0; i < argc; i++)
    {
        printf("\nArg%d=%s\n", i, argv[i]);
    }

    i = 0;

    while (var_ptr[i] != NULL)
    {
        printf("Env var => %s\n", var_ptr[i]);
        i++;
    }
    
    
    printf("\n");

    return 0;
}
