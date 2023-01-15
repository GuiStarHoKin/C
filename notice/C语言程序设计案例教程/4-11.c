/* 斐波那契(Fibonacci)数列，又称黄金分割数列：该数列的第一项是 0，第二项是 1，从第三
项起每一项都是前两项之和。
编写 C 语言程序，从键盘读入一个整数 n，然后输出斐波那契数列中大小不超过 n 的项到屏幕，
项与项之间使用空格分隔。如果整数 n 小于 1，则输出“非法数据”。运行过程如图 4- 11 所示。
要求：使用 long long 类型。 */

#include <stdio.h>

// 方法一
/* void PrintFibonacci(int n)
{
  long long x = 0;
  long long y = 1;
  long long z = 0;
  if (n < 1)
  {
    printf("非法数据\n");
  }
  else if (n == 1)
  {
    printf("%lld\n", x);
  }
  else if (n == 2)
  {
    printf("%lld %lld\n", x, y);
  }
  while (1)
  {
    z = x + y;
    if (z <= n)
    {
      printf("%lld ", z);
    }
    else
    {
      break;
    }
    x = y;
    y = z;
  }
  printf("\n");
} */

// 方法二
void PrintFibonacci(int n)
{
  long long x = 0;
  long long y = 1;
  long long z = 0;
  if (n < 1)
  {
    printf("非法数据\n");
  }
  else if (n == 1)
  {
    printf("%lld\n", x);
  }
  else if (n == 2)
  {
    printf("%lld %lld\n", x, y);
  }
  while (z <= n)
  {
    printf("%lld ", z);
    x = y;
    y = z;
    z = x + y;
  }
  printf("\n");
}

int main()
{
  int n = 0;
  printf("请输入一个整数:>");
  scanf("%d", &n);
  PrintFibonacci(n);
  return 0;
}