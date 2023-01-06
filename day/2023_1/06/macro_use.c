#include <stdio.h>
//#define SQUARE(x) x*x
#define SQUARE(x) (x)*(x) // 写宏的时候，不要吝啬括号

int main()
{
  int ret = 0;
  ret = SQUARE(5);
  //ret = SQUARE(5+1); // 11
  //ret = SQUARE((5+1)); // 36 (x)*(x)
  printf("%d\n", ret);
  return 0;
}