#include <stdio.h>

//auto int g_val = 100; err

int main()
{
  auto int i = 0;
  for (i = 0; i<10; i++)
  {
    printf("i = %d\n", i);
    if (1)
    {
      auto int j = 0;
      printf("before:%d\n", j);
      j++;
      printf("after:%d\n", j);
    }
  }
  return 0;
}