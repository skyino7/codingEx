#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr;

    printf("Enter Number Elemens: ");
    scanf("%d", &n);

    ptr = (int*)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return (0);
    
}