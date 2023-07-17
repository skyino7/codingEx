// int* twoSum(int* nums, int numsSize, int target, int* returnSize)

#include <stdio.h>
#include <string.h>

int main() {
  int array[6] = {2, 3, 4, 10, 2, 7};
  int target = 13, i, j = 0;
  int arr[2];

  for (i = 0; i < sizeof(array) / sizeof(int); i++) {
    for (j = 0; j < sizeof(array) / sizeof(int); j++) {
      if (i == j) {
        continue;
      } else if (array[i] + array[j] == target) {
        arr[0] = i;
        arr[1] = j;
      }
    }
  }
  printf("Output: [%d, %d]\n", arr[0], arr[1]);

  return (0);
}