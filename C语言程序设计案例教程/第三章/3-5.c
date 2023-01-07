/*编写 C 语言程序，从键盘读入 2 个整数并输出这 2 个数中的最大值到屏幕。运行过程如图 3-
5 所示。
要求使用两种方法完成：
(1) 第一种方法使用 if 语句的“完整形式”;
(2) 第二种方法使用 if 语句的“最简形式”。*/

//1
/*
#include <stdio.h>

int main()
{
  int num1 = 0;
  int num2 = 0;
  int ret = 0;
  printf("第1个整数:");
  scanf("%d", &num1);
  printf("第二个整数:");
  scanf("%d", &num2);
  if (num1 > num2)
  {
    ret = num1;
  }
  else
  {
    ret = num2;
  }
  printf("最大值是:%d\n", ret);
  return 0;
}*/

//2
/*
#include <stdio.h>

int main()
{
  int num1 = 0;
  int num2 = 0;
  int ret = 0;
  printf("第1个整数:");
  scanf("%d", &num1);
  printf("第2个整数:");
  scanf("%d", &num2);
  if (num1 > num2)
    ret = num1;
  else
    ret = num2;
  printf("最大值是:%d\n", ret);
  return 0;
}*/

//3
/*
#include <stdio.h>

int main()
{
  int num1 = 0;
  int num2 = 0;
  int max = 0;
  printf("第1个整数:>");
  scanf("%d", &num1);
  printf("第2个整数:>");
  scanf("%d", &num2);
  max = num1;
  if (num2 > num1)
  {
    max = num2;
  }
  printf("最大值是:%d\n", max);
  return 0;
}*/

//4
/*
#include <stdio.h>

int main()
{
  int num1 = 0;
  int num2 = 0;
  int max = 0;
  scanf("%d", &num1);
  scanf("%d", &num2);
  max = (num1)>(num2)?(num1):(num2);
  printf("max:%d\n", max);
  return 0;
}*/

//5
#include <stdio.h>
#define JUDGEMAX(X,Y) ((X)>(Y)?(X):(Y)) 

int main()
{
  int num1 = 0;
  int num2 = 0;
  int max = 0;
  scanf("%d", &num1);
  scanf("%d", &num2);
  max = JUDGEMAX(num1, num2);
  printf("max:%d\n", max);
  return 0;
}