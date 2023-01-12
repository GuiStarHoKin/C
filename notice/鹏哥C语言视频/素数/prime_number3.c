#include <stdio.h>

// 试除法
void is_prime(void)
{
  // 1~1000之间的素数
  int i = 0;
  int count = 0;
  for (i=2; i<= 1000; i++) // 最小的一个素数是2
  {
    if (i == 2) // 特例
    {
      count++;
      printf("%d\t", i);
    }

    if (i % 2 != 0) //偶数没有必要进去判断是否为素数,除了2之外的偶数不会是素数
    {
      int j = 2;
      for (j=2; j < i; j++) // 产生除了1和它本身的数去试除
      {
        if (i % j == 0)
        {
          break; // 不是素数
        }
      }
      if (j == i) // 全部数试除完毕后
      {
        count++; // 是素数
        printf("%d\t", i);
      }
    }
  }
  printf("\n总共有素数%d个\n", count);
}

int main()
{
  is_prime();
  return 0;
}

/* #include <stdio.h>
#include <math.h> // gcc test.c -lm

// 试除平方法
void is_prime(void)
{
  //1~1000的素数
  int i = 0;
  int count = 0;
  // 素数从2开始
  for (i=2; i<=1000; i++)
  {
    // 特例
    if (2 == i)
    {
      count++;
      printf("%d\t", i);
    }

    // 偶数除了2不会是素数，直接pass
    if (i % 2 != 0)
    {
      // 判断是否为素数
      int j = 2;
      // 产生小于等于开平i的数
      for (j=2; j<=sqrt(i); j++)
      {
        // 小于等于开平方i的数中，有可以整除i的，那么i不是素数
        if (i % j == 0)
        {
          break;
        }
      }
      if (j > sqrt(i))
      {
        count++;//是素数
        printf("%d\t", i);
      }
    }
  }
  printf("\n素数共有%d个\n", count);
}

int main()
{
  is_prime();
  return 0;
} */


/* //使用while循环及break语句

int Prime(int num)
{
  int i = 2;
  // 产生大于2小于num的数去试除
  while(i < num)
  {
    if (num % i == 0)
    {
      return 0;
    }
    i++;
  }
  return 1;
} */


/* int main()
{
  int num = 0;
  int i = 2;
  printf("请输入一个整数:>");
  scanf("%d", &num);
  int is_prime = 0;//0为合数，1为素数
  //开始判断
  for (i=2; i<num; i++)
  {
    if (num % i == 0)
    {
      is_prime = 0; //合数
      break;
    }
  }
  if (num == i)
  {
    is_prime = 1;
  }
  if (is_prime)
  {
    printf("%d是素数\n", num);
  }
  else
  {
    printf("%d是合数\n", num);
  }
  return 0;
} */