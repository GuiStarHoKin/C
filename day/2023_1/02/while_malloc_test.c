// 内存泄漏很危险
#include <stdlib.h>

int main()
{
  while (1)
  {
    malloc(1);
  }
  return 0;
}