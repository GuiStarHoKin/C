// void* memset(void* dest, int c,size_t count);
#include <stdio.h>
#include <memory.h>

int main()
{
  char arr[10] = {0};
  // ok,count单位为字节
  memset(arr,'#',10);
  /*
  err
  int arr[10] = {0};
  memset(arr,1,10);
  01 01 01 01|01 01 01 01| 01 01 00 00|00 00 00 00...
  */
 return 0;

}