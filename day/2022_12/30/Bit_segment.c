#include <stdio.h>

struct S
{
  int a : 2; // 可以有2^2=4种可能性
  int b : 5;
  int c : 10;
  int d : 30;
};
// int 变量名 : bit
// 开辟内存空间的时候先开辟4个字节(int)->32bit，然后a用了2个，...，然后剩下的不够d使用，就重新开辟了4个字节的内存给d

int main()
{
  struct S s;
  printf("%ld\n", sizeof(s));
  return 0;
}