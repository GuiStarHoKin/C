/*编写 C 语言程序，从键盘读入一个整数 n，然后按照从小到大的顺序输出前 n 个正整数到屏幕(不
输出 2 的倍数、3 的倍数以及 5 的倍数)，每个数使用空格分隔。如果整数 n 小于 1，则输出“非法数
据”
。运行过程如图 3- 13 所示。
要求使用两种方法完成：
(1) 第一种方法使用关键字 continue；
(2) 第二种方法不使用关键字 continue*/
/*
#include <stdio.h>

void Print(void)
{
  int n = 0;
  int i = 0;
  printf("请输入一个整数:>");
  scanf("%d", &n);
  if (n < 1)
  {
    printf("非法数据\n");
    return;
  }
  for (i=0; i<=n; i++)
  {
    if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0))
    {
     continue;
    }
    else
    {
      printf("%d ", i);
    }
  }

}

int main()
{
  Print();
  return 0;
}*/

#include <stdio.h>

void Print(void)
{
  int n = 0;
  int i = 0;
  printf("请输入一个整数:>");
  scanf("%d", &n);
  if (n < 1)
  {
    printf("非法数据\n");
    return;
  }
  for (i=0; i<=n; i++)
  {
    if ((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0))
    {
      printf("%d ", i);
    }
  }
}

int main()
{
  Print();
  return 0;
}