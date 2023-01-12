#include <stdio.h>
#include <math.h>

void is_prime(void)
{
  //1~10000之间的素数
  int i = 0;
  int count = 0;
  // 最小的素数为2
  for (i=2; i<=10000; i++)
  {
    // 特例
    if (i == 2)
    {
      count++;
      printf("%d\t", i);
    }


    // 除了2的偶数都不会是素数，直接pass
    if (i % 2 != 0)
    {
      int j = 2;
      // 产生小于等于i开平方的数
      for (j=2; j<=sqrt(i); j++)
      {
        if (i % j == 0)
        {
          break; // 如果小于等于i开平方的数可以整除i，那么i不是素数
        }
      }
      if (j > sqrt(i))
      {
        count++;
        printf("%d\t", i);
      }
    }
  }
  printf("\n共有素数%d个\n", count);
}

int main()
{
  is_prime();
  return 0;
}