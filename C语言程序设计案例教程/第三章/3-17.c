/* 质数(Prime number)，又称素数，指在大于 1 的整数中，除了 1 和该数自身外，无法被其他整
数整除的数(或者说是只有 1 与该数本身两个正因数的数)。大于 1 的整数若不是素数，则称之为
合数。
编写 C 语言程序，从键盘读入一个整数 n，然后判断 n 是素数或者合数并输出结果到屏幕。
如果整数 n 小于 2，则输出“非法数据”
。运行过程如图 3- 17 所示。 */

#include <stdio.h>
#include <math.h>

/*
//试除法
int Prime(int num)
{
  int j = 2;
  if (num < 2)
  {
    printf("非法数据\n");
    return -1;
  }

  for (j=2; j<num; j++)
  {
    if (num % j == 0)
    {
      return 0;
    }
  }
  return 1;

}
*/

/* // 平方试除法
int Prime(int num)
{
  int j = 2;
  if (num < 2)
  {
    printf("非法数据!\n");
  }
  // 产生小于等于num的值去试除
  for (j=2; j<=sqrt(num); j++)
  {
    if (num % j == 0)
    {
      return 0;
    }
  }
  return 1;
} */

//使用while循环及break语句

int Prime(int num)
{
  int i = 2;
  while(i < num)
  {
    if (num % i == 0)
    {
      return 0;
    }
    i++;
  }
  return 1;
}

int main()
{
  int num = 0;
  int ret = 0;
  printf("请输入一个整数:>");
  scanf("%d", &num);
  ret = Prime(num);
  if (ret == 1)
  {
    printf("%d是素数\n", num);
  }
  else if (ret == 0)
  {
    printf("%d是合数\n", num);
  }
  return 0;
}