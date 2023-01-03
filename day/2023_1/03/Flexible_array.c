#include <stdio.h>
#include <stdlib.h>

struct S
{
  int i;
  char arr[]; // 柔性数组成员
};

struct S2
{
  int i;
  char arr[0]; // 柔性数组成员
};

int main()
{
  int i = 0;
  printf("%ld\n", sizeof(struct S));
  printf("%ld\n", sizeof(struct S2));
  struct S *p = (struct S*)malloc(sizeof(struct S) + 10*sizeof(int));// 使用柔性数组成员
  p->i = 100;
  if (p != NULL)
  {
    for (i=0; i<10; i++)
    {
      p->arr[i] = i;
    }
    for (i=0; i<10; i++)
    {
      printf("%d ", p->arr[i]);
    }
    printf("\n");
    free(p);
    p = NULL;
  }
  return 0;
}