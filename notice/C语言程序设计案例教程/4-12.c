/* 编写 C 语言程序，从键盘读入 2 个整数 m 和 n(m 和 n 使用空格分隔)，然后输出斐波那契数
列中数值介于 m 与 n 之间(包含 m 与 n)的项，项与项之间用空格分隔。如果整数 m、n 不满足条
件 “0 ≤ m ＜ n”
，则输出“非法数据”。运行过程如图 4- 12 所示。
要求：使用 long long 类型 */

#include <stdio.h>

//方法一
/* void PrintFibonacci(long long m, long long n)
{
  if ((m >= 0) && (m < n))
  {
    long long x = 0;
    long long y = 1;
    long long z = 0;
    if (m == 0)
    {
      printf("%lld\n", x);
    }
    else if (m == 1)
    {
      printf("%lld %lld\n", x, y);
    }
    while (1)
    {
      z = x + y;
      if (z > n)
      {
        break;
      }
      if (z >= m)
      {
        printf("%lld ", z);
      }
      x = y;
      y = z;
    }
    printf("\n");
  }
  else
  {
    printf("非法数据\n");
  }
} */


//方法二
void PrintFibonacci(long long m, long long n)
{
  if ((m >= 0) && (m < n))
  {
    long long x = 0;
    long long y = 1;
    long long z = 0;
    if (m == 0) // m < n
    {
      printf("%lld\n", x);
    }
    else if (m == 1)
    {
      printf("%lld %lld\n", x, y);
    }
    while (z <= n)
    {
      if (z >= m)
      {
        printf("%lld ", z);
      }
      x = y;
      y = z;
      z = x + y;
    }
    printf("\n");
  }
  else
  {
    printf("非法数据\n");
  }
}

int main()
{
  long long n = 0;
  long long m = 0;
  printf("请输入整数m和n:>");
  scanf("%lld %lld", &m, &n);
  PrintFibonacci(m, n);
  return 0;
}