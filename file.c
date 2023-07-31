#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fptr;

    fptr = fopen("filename1.txt", "w");

    if (fptr == NULL)
    {
        printf("The file is not opened. Exit Now!\n");
        exit(0);
    }
    else
    {
        printf("File Created\n");
    }
    

    return 0;
}
