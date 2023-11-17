#include <stdio.h>

int main(void)
{
    int num = 0, num1 = 0;

    num = 1;

    num1 = ++num + num++;

    printf("Num: %d\n", num);

    printf("Num: %d\n", num1);

    return 0;
}
