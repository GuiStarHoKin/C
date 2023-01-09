#include <stdio.h>

int *p = NULL;

void fun(void)
{
  static int a = 100;
  p = &a;
}

int main()
{
  fun();
  *p = 200;
  printf("%d\n", *p);
  return 0;
}