// int memcmp(const void* ptr1, const void* ptr2, size_t num);
#include <stdio.h>
#include <memory.h>

int main()
{
  int ret = 0;
  int arr1[] = {1,2,3,4,5};
  int arr2[] = {1,2,5,3,4};
  ret = memcmp(arr1,arr2,8);
  printf("%d\n",ret);
  return 0;
}