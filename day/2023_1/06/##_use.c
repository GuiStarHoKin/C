#include <stdio.h>
#define HELLO(X,Y) X##Y
int main()
{
  int helloworld = 2012;
  printf("%d\n", HELLO(hello,world));// 2012
  return 0;
}