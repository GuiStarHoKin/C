#include <stdio.h>

int main()
{
  
  int i = 1;
  printf("%ld\n", sizeof(i++));
  printf("%d\n", i);
  return 0;
}