#include <stdio.h> // printf
#include <windows.h> // system("pause")
#include <stdlib.h> // qsort
#include <string.h> // strlen


int CompareStrlen(const void *e1, const void *e2)
{
  if (strlen(e1) > strlen(e2))
  {
    return 1;
  }
  else if (strlen(e1) < strlen(e2))
  {
    return -1;
  }
  else if (strlen(e1) == strlen(e2))
  {
    return 0;
  }
}

int main()
{
  char arr[3][8] = {{"bacaaaa"}, {"cabaa"}, {"abca"}}; // 把arr看成一个有3个元素的一维数组
  int sz = sizeof(arr) / sizeof(arr[0]); // 求出数组长度
  int i = 0;

  printf("排序前:>");
  for (i=0; i<sz; i++)
  {
    printf("%s ", arr[i]);
  }
  
  qsort(arr, sz, sizeof(char[8]), CompareStrlen); // 开始排序

  printf("\n排序后:>");
  for (i=0; i<sz; i++)
  {
    printf("%s ", arr[i]);
  }
  printf("\n");

  system("pause");
  return 0;
}