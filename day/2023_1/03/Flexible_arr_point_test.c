#include <stdio.h>
#include <stdlib.h>

struct S
{
  int i;
  int *arr;
}s;

int main()
{
  int i = 0;
  s.i = 100;
  s.arr = (int*)malloc(10*sizeof(int));
  for (i=0; i<10; i++)
  {
    s.arr[i] = i;
  }
  for (i=0; i<10; i++)
  {
    printf("%d ",s.arr[i]);
  }
  printf("\n");
  free(s.arr);
  s.arr = NULL;
  return 0;
}