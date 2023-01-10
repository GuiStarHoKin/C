#include <stdio.h>

int main()
{
  unsigned int a = -10;
  printf("%d\n", '0');
  printf("%d\n", '\0');
  printf("%u\n", a); // unsigned int 解释
  printf("%d\n", a); // signed int 解释
  return 0;
}