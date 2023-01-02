#include <stdio.h>
#include <stdlib.h>

struct S
{
  int i;
  int *arr;
};


int main()
{
  int i = 0;
  struct S *ps =(struct S*)malloc(sizeof(struct S));
  ps->arr = malloc(5*sizeof(int));
  for (i=0; i<5; i++)
  {
    ps->arr[i] = i;
  }
  for (i=0; i<5; i++)
  {
    printf("%d ",ps->arr[i]);
  }
  int* ptr =(int*)realloc(ps->arr, 10*sizeof(int));
  if (ptr != NULL)
  {
    ps->arr = ptr;
  }
  for (i=5; i<10; i++)
  {
    ps->arr[i] = i;
  }
  for (i=0; i<10; i++)
  {
    printf("%d ",ps->arr[i]);
  }
  printf("\n");
  free(ps->arr);
  free(ps);
  ps->arr = NULL;
  ps = NULL;
  return 0;
}