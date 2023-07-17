#include <stdio.h>
#include <stdlib.h>

int is_digit(char c) {
  return c >= '0' && c <= '9';
}

int str_to_int(char *str) {
  int n = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    n = n * 10 + (str[i] - '0');
  }
  return n;
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Error\n");
    exit(98);
  }

  for (int i = 0; argv[1][i] != '\0'; i++) {
    if (!is_digit(argv[1][i])) {
      printf("Error\n");
      exit(98);
    }
  }

  for (int i = 0; argv[2][i] != '\0'; i++) {
    if (!is_digit(argv[2][i])) {
      printf("Error\n");
      exit(98);
    }
  }

  int num1 = str_to_int(argv[1]);
  int num2 = str_to_int(argv[2]);

  int product = num1 * num2;

  printf("%d\n", product);

  return 0;
}