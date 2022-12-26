// 结构体内存对齐
#include <stdio.h>

struct S1
{
  char c1;
  int age;
  char c2;
};

struct S2
{
  char c1;
  char c2;
  int age;
};

int main()
{
  struct S1 s1 = {0};
  printf("%ld\n",sizeof(s1));
  struct S2 s2 = {0};
  printf("%ld\n",sizeof(s2));
  return 0;
}