#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define N 1

int main()
{
  while (1)
  {
    int *p = (int *)malloc(sizeof(int)*N);
    if (p == NULL)
    {
      perror("malloc\n");
    }
  }
  system("pause");
  return 0;
}