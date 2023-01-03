#include <stdio.h>
#include <stdlib.h>

struct S
{
  int i;
  int *arr;
};

int main()
{
  struct S *ps = (struct S*)malloc(sizeof(struct S));
  if (ps != NULL)
  {
    ps->i = 100;
    ps->arr = (int*)malloc(10*sizeof(int));
    if (ps->arr != NULL)
    {
      int i = 0;
      for (i=0; i<10; i++)
      {
        ps->arr[i] = i;
      }
      for (i=0; i<10; i++)
      {
        printf("%d ", ps->arr[i]);
      }
      printf("\n");
    }
  }
  free(ps->arr);
  ps->arr = NULL;
  free(ps);
  ps = NULL;
  return 0;
}