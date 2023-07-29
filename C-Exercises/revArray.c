#include <stdio.h>

void revArray(int pos[], int num)
{
    int i, j;

    while (i < num/2)
    {
        j = pos[i];
        pos[i] = pos[num - i - 1];
        pos[num - i - 1] = j;
        i++;
    }
    
}

int main(void)
{
    int num, i, pos[10];

    scanf("%d", &num);

    for (i = 0; i < num; i++)
        scanf("%d", &pos[i]);

    revArray(pos, num);

    printf("The Array after reversal:\n");
    
    for (i = 0; i < num; i++)
        printf("%d\n", pos[i]);

    return (0);
    
}