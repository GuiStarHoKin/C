#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
  int i = 0;
  int *p = (int*)malloc(sizeof(int) * 30);
  memset(p, 0, sizeof(int)*30);
  for (i=0; i<30; i++)
  {
    printf("%d ", p[i]);
  }
  printf("\n");
  free(p);
  p = NULL;
  system("pause");
  return 0;
}