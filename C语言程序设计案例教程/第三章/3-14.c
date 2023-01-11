/*编写 C 语言程序，从键盘读入一个整数 n，然后使用循环语句计算前 n 个正整数之和，并输出到
屏幕。如果整数 n 小于 1，则输出“非法数据”。运行过程如图 3- 14 所示。
要求使用两种方法完成：
(1) 第一种方法使用一个 while 循环语句逐个整数累加求和;
(2) 第二种方法使用等差数列的求和公式直接计算结果。*/

#include <stdio.h>

int Sum(int n)
{
  if (n < 1)
  {
    printf("非法数据\n");
    return 0;
  }
  else
  {
    /* int i = 0;
    int sum = 0;
    for (i=1; i<=n; i++)
    {
      sum += i;
    }
    return sum; */
    
    /* return ((1 + n) * n / 2); */
    
    /* int sum = 0;
    while (n >= 1)
    {
      sum += n;
      n--;
    }
    return sum; */
    if (n == 1)
    {
      return 1;
    }
    else
    {
      return Sum(n-1) + n;
    }
  }
}

int main()
{
  int n = 0;
  int ret = 0;
  printf("请输入一个整数:>");
  scanf("%d", &n);
  ret = Sum(n);
  printf("前%d个正整数之和:%d\n", n, ret);
  return 0;
}