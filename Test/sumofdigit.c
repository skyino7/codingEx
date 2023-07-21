#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, sum = 0, reminder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        reminder = n % 10;
        sum += reminder;
        n = n / 10;
    }

    printf("Sum = %d\n", sum);
    
    return 0;
}