// 逗号表达式，取逗号最后的
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 0;
  int j = 0;
  for (i=0,j=0;1,0;i++,j++)  //i<=2为真,j<2为假，整体为假，不进入循环体
  {            i<=2,j<2//j<2,i<=2//0,1
    printf("i:%d j:%d\n", i, j);
  }
  system("pause");
  return 0;
}