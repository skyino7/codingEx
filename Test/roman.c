#include <stdio.h>

int main() {
  // int arr[] = {I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000};

  int sum = 0, i = 1, v = 5; 
  int j = 0;

  char value[] = "III";
  char new[] = "I";

  while (value[j] != '\0') {
    if (value == new) {
      sum += i;
      j++;
    }
    else if (value != new)
    {
        printf("%","Error\n");
        // break;
    }
    
  }
  printf("%d\n", sum);

}