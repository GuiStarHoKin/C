/* 编写 C 语言程序，从键盘读入 3 个整数(使用空格分隔)作为 3 条线段长度，如果这 3 条线段
能够组成一个三角形，那么输出“能组成一个三角形”的信息到屏幕，否则就输出“不能组成一
个三角形”的信息到屏幕。如果线段长度小于 1，则输出“非法数据”。运行过程如图 4- 4 所示。 */

#include <stdio.h>

int Judge(int a, int b, int c)
{
  if ((a < 1) || (b < 1) || (c < 1))
  {
    return -1; // 非法
  }
  else if ((a + b) > c && (a + c) > b && (b + c) > a)
  {
    return 1;
  }
  else if ((a - b) < c && (a - c) < b && (b - c) < a)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int a = 0;
  int b = 0;
  int c = 0;
  int ret = 0;
  printf("请输入3条边的长度(整数):>");
  scanf("%d %d %d", &a, &b, &c);
  ret = Judge(a, b, c);
  if (1 == ret)
  {
    printf("由边长为%d、%d、%d的3条边能组成一个三角形\n", a, b, c);
  }
  else if (0 == ret)
  {
    printf("由边长为%d、%d、%d的3条边不能组成一个三角形\n", a, b, c);
  }
  else if (-1 == ret)
  {
    printf("非法数据\n");
  }
  else
  {
    printf("oops!\n");
  }
  return 0;
}