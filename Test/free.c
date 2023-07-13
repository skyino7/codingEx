#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *p = (char *)malloc(10 * sizeof(char));

    strcpy(p, "Hello");

    printf("%s\n", p);
    // free(p);
        
    printf("Memory Released\n");
    printf("World\n");
}