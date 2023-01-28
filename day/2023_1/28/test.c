#include <stdio.h>

#define NUM 10

int main()
{
/*   int a = 10;
  int b = 20;
  int c = 30;
  int i = 0;
  int arr[NUM] = {0};
  printf("%p\n", &a);
  printf("%p\n", &b);
  printf("%p\n", &c);
  for (i=0; i<NUM; i++)
  {
    printf("%p\n", &arr[i]);
  } */
/*   char *a = NULL;
  short *b = NULL;
  int *c = NULL;
  double *d = NULL;
  printf("%d\n", a);
  printf("%d\n\n", a+1);
  printf("%d\n", b);
  printf("%d\n\n", b+1);
  printf("%d\n", c);
  printf("%d\n\n", c+1);
  printf("%d\n", d);
  printf("%d\n\n", d+1);
  return 0; */

  const char* str = "hello bit";
  char buffer[] = "hello world";
  buffer[0] = 'H';
  printf(buffer);
  return 0;
}