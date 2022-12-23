// int memcmp(const void* ptr1, const void* ptr2, size_t num);
#include <stdio.h>
#include <memory.h>

int main()
{
  int ret = 0;
  int arr1[] = {1,2,3,4,5};
  int arr2[] = {1,2,5,3,4};
  ret = memcmp(arr2,arr1,8);
  //ret = memcmp(arr2,arr2,9); //比较9个字节则不同
  // 01 00 00 00|02 00 00 00|03 00 00 00|04 00 00 00|05 00 00 00
  // 01 00 00 00|02 00 00 00|05 00 00 00|03 00 00 00|04 00 00 00
  
  printf("%d\n",ret);
  return 0;
}