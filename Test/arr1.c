#include <stdio.h>
int main() {
  int a[7] = {1, 2, 3, 4, 5, 6, 7};
  int target = 3, j, i = 0, a1[2];

  for (j = i + 1; i < sizeof(a) / sizeof(int); j++) {
    if (j >= sizeof(a) / sizeof(int)) {
      i++;
      j = i + 1;
    } else if (a[i] + a[j] == target) {
      a1[0] = i;
      a1[1] = j;
    }
  }
  printf("[%d, %d]\n", a1[0], a1[1]);
  return 0;
}