#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MyIntCompare(const void *a, const void *b)
{
  return (*(char*)a - *(char*)b);
}

int main()
{
  // int arr[] = {12, 90, 56, 34, 78};
  // int len = 0;
  // len = sizeof(arr) / sizeof(arr[0]);
  int i = 0;

  char str[] = {'a', 'd', 'b', 'c', 'e', '\0'};
  qsort(str, strlen(str), sizeof(char), MyIntCompare);

  for (i=0; i<strlen(str); i++)
  {
    printf("%c ", str[i]);
  }
  printf("\n");
  system("pause");
  return 0;
}