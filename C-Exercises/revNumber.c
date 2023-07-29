#include <stdio.h>

int reverse(int num);

int main(void)
{
    int num, reve;

    printf("Enter a number to reverse\n");
    scanf("%d", &num);

    reve = reverse(num);
    
    printf("Reverse of the number =  %d\n", reve);

    return (0);
}

int reverse(int num)
{
    int rev = 0;

    if (num == 0)
        return (0);
    
    while (num != 0)
    {
        rev = rev * 10;
        rev = rev + num%10;
        num = num / 10;
    }

    return (rev);
}