#include <stdio.h>

int main(void)
{
	int n = 50;
    int *ptr = &n;

    printf("%d\n", n);
	printf("%p\n", &n);
    printf("%p\n", ptr);
}
