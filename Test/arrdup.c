#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize)
{

    int* arr = malloc(sizeof(int) * numsSize);

    int i, j, k = 1;

    arr[0] = nums[0];

    for (i = 1; i < numsSize; i++)
    {
        if (nums[i-1] != nums[i])
        {
            arr[k] = nums[i];
            k++;
        }
    }

    for (j = 0; j < k; j++)
    {
        printf("%d", arr[j]);
        nums[j] = arr[j];
    }

    free(arr);

    return (k);

}

int main(void)
{
    int nums[15] = {0,0,1,1,1,2,2,3,3,4, 5, 5, 6,6, 7};
    int array = removeDuplicates(nums, 15);

    int r = 0;

    for (r = 0; r < 15; r++)
    {
        printf("%d", nums[r]);
    }

    return 0;
}
