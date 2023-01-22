#include <stdio.h>

int main()
{
  printf("%d\n", 0x01 << 2 + 3);
  printf("%d\n", 0x01 << (2+3));
  printf("%d\n", (0x01 << 2) + 3);
  return 0;
}