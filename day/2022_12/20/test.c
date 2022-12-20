#include <stdio.h>
#include <string.h>

int main()
{
  int i = 0;
  int len = 0;
  int arr1[] = {1,2,3,4,5}; // |01 00 00 00|02 00 00 00|03 00 00 00|04 00 00 00|
  int arr2[5] = {0};       //  |01 cp完成
  len = sizeof(arr1) / sizeof(arr1[0]);
  strcpy(arr2,arr1);
  for(i = 0;i<len;i++)
  {
    printf("%d\n",arr2[i]);
  }
  return 0;
}