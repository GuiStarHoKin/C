#include <stdio.h>

// 设置默认对齐数为4
#pragma pack(4)
struct S
{
  char c;
  double d;
};
#pragma pack()
// 取消设置的默认对齐数

int main()
{
  struct S s;
  printf("%ld\n",sizeof(s)); // 不设置pragma16,pack(4) 12,pack(1) 9,pack(0) 16恢复默认
  return 0;
}