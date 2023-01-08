/*编写 C 语言程序，从键盘读入 3 个整数并输出这 3 个数中的最小值到屏幕。运行过程如图 3-
6 所示。
要求使用两种方法完成：
(1) 第一种方法使用 if 语句的“完整形式”以及“最简形式”;
(2) 第二种方法只使用 if 语句的“最简形式”
，不使用 if 语句的“完整形式”
。*/

/*编写 C 语言程序，从键盘读入 3 个整数并输出这 3 个数中的最小值到屏幕。运行过程如图 3-
6 所示。
要求使用两种方法完成：
(1) 第一种方法使用 if 语句的“完整形式”以及“最简形式”;
(2) 第二种方法只使用 if 语句的“最简形式”
，不使用 if 语句的“完整形式”
。*/

//1
/*
#include <stdio.h>

int Min(int num1, int num2, int num3)
{
  int min = 0;
  min = num1;
  if (min > num2)
  {
    min = num2;
  }
  else if (min > num3)
  {
    min = num3;
  }
  return min;
}

int main()
{
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int min = 0;
  printf("第1个数:>");
  scanf("%d", &num1);
  printf("第2个数:>");
  scanf("%d", &num2);
  printf("第3个数:>");
  scanf("%d", &num3);
  min = Min(num1, num2, num3);
  printf("最小值是:%d\n", min);
  return 0;
}*/

//2--更适合自己
#include <stdio.h>

int Min(int num1, int num2, int num3)
{
  int min = 0;
  if (num1 > num2)
  {
    min = num2;
  }
  else
  {
    min = num1;
  }
  if (min > num3)
  {
    min = num3;
  }
  return min;
}

int main()
{
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int min = 0;
  printf("第1个数:>");
  scanf("%d", &num1);
  printf("第2个数:>");
  scanf("%d", &num2);
  printf("第3个数:>");
  scanf("%d", &num3);
  min = Min(num1, num2, num3);
  printf("min:%d\n", min);
  return 0;
}