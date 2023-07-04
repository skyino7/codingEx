#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[0] = 'a';
  a[2] = 'b';
  p = &n;

  a[2] = 1024;

  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
   
//   *(p + 4) = 'h';
  p[5] = 98;

//   printf("%ld Diff byte", (p+0)-6);
  /* ...so that this prints 98\n */
  printf("Address of N %p\n", &n);
  printf("Address of P+0 %p\n", p + 0);
  printf("Address of A[0] %p\n", &a[0]);
  printf("Address of A[0] %p\n", &a[0]);
  printf("Address of P+1 %p\n", p + 1);
  printf("Address of A[1] %p\n", &a[1]);
  printf("Address of P+2 %p\n", p + 2);
  printf("Address of A[2] %p\n", &a[2]);
  printf("Address of P+3 %p\n", p + 3);
  printf("Address of A[3] %p\n", &a[3]);
  printf("Address of P+4 %p\n", p + 4);
  printf("Address of A[4] %p\n", &a[4]);
  printf("Address of P+5 %p\n", p + 5);
  printf("Address of A[5] %p\n", &a[5]);
//   printf("Address of P+6 %p\n", p + 6);

//   printf("Address of P+12 %p\n", p + 12);
//   printf("Address of A[2] %p\n", &a[2]);
  printf("a[2] = %c\n", a[2]);
  printf("a[0] = %c\n", a[0]);
  return (0);
}