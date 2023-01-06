#include <stdio.h>
#define MAX(X, Y) ((X)>(Y)?(X):(Y))

int main()
{
  int a = 10;
  int b = 20;
  printf("MAX:%d\n", MAX(a, b));
  return 0;
}