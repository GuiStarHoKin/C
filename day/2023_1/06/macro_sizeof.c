#include <stdio.h>
#define SIZEOF(type) sizeof(type)

int main()
{
  int ret = 0;
  ret = SIZEOF(int);
  printf("%d\n", ret);
  return 0;
}