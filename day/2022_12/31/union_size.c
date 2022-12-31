#include <stdio.h>

union Un
{
  int i;//4 4/8
  //char c;// 1 1/8
  char arr[5]; // 5 1/8
};

int main()
{
  union Un u;
  printf("%ld\n", sizeof(u));
  return 0;
}