#include <stdio.h>


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