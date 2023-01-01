#include <stdio.h>

int main()
{
  int n = 0;
  int i = 0;
  printf("请输入数组元素个数:>");
  scanf("%d", &n);
  int arr[n];
  for (i=0; i<n; i++)
  {
    arr[i] = i;
  }
  for (i=0; i<n; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  return 0;
}