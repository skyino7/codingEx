#include <stdio.h>

int add_array(int *a, int elements);

int main()
{
    int arr[5] = {100, 330, 50, 89, 65};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Total Summation is %d\n", add_array(arr, n));

    return 0;
}

int add_array(int *p, int size)
{
    int sum = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        sum += p[i];
    }

    return (sum);
    
}