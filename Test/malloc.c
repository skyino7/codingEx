#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int *ptr;
    int n, i;

    printf("Enter number of Elements:");
    scanf("%d", &n);
    printf("Entered number of Elements: %d\n", n);

    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory successful allocated using malloc.\n");

        for (i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }

        printf("The elements of the array are: ");

        for (i = 0; i < n; i++)
        {
            printf("%d, ", ptr[i]);
        }

        printf("\n");
        
    }
    
    return (0);
}