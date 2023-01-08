#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 0;
  int n = 0;
  printf("请输入:>");
  scanf("%d", &n);
  int *p = (int*)calloc(n, sizeof(int));
  for (i=0; i<n; i++)
  {
    *(p+i) = i;
  }
  for (i=0; i<n; i++)
  {
    printf("%d ", *(p+i));
  }

  return  0;
}