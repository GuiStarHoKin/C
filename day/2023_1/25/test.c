#include <stdio.h>

#define INIT_VALUE(X, Y) \
do{\
  printf("before:%d %d\n", X, Y);\
  X=0;\
  Y=0;\
  printf("after:%d %d\n", X, Y);\
}while(0)

int main()
{
  int x = 1;
  int y = 1;
  int flag = 0;
  scanf("%d", &flag);
/*   if (flag)
  {
    INIT_VALUE(x, y);
  } */
  if (flag)
    INIT_VALUE(x, y);
  else
  {
    x = 100;
    y = 100;
    printf("oops!%d %d\n",x ,y);
  }
  return 0;
}

