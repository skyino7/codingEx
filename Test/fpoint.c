#include <stdio.h>

void swap (int *a, int *b);

int main(int argc, char const *argv[])
{
    int a = 500;
    int b = 30;

    printf("a is %d, b is %d\n", a, b);
    swap(&a, &b);
    printf("a is %d, b is %d\n", a, b);

    return 0;
}

void swap (int *a, int *b)
{

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}