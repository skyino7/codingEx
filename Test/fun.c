#include <stdio.h>
#include <string.h>

char *fun() {
  char disk[50];
  strcpy(disk, "Function: memory in c");
  printf("%s\n", disk);
  return disk;
}

int main() {
  int i;
  char *ptr;
  char *fun();
  ptr = fun();
  printf("Main: %s\n", ptr);
  return 0;
}