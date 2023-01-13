/* 编写 C 语言程序，从键盘读入 3 个整数(使用空格分隔)作为 3 条线段长度，如果这 3 条线段
能够组成一个直角三角形，那么输出“能组成一个直角三角形”的信息到屏幕，否则就输出“不
能组成一个直角三角形”的信息到屏幕。如果线段长度小于 1，则输出“非法数据”
。运行过程如
图 4- 5 所示。 */

#include <stdio.h>
#include <math.h>

int Judge(int edge1, int edge2, int edge3)
{
  if ((pow(edge1, 2) + pow(edge2, 2)  == pow(edge3, 2)) || (pow(edge1, 2) + pow(edge3, 2) == pow(edge2, 2))
    || pow(edge2, 2) + pow(edge3, 2) == pow(edge1, 2))
    {
      return 1;
    }
  else if ((edge1 < 1) || (edge2 < 1) || (edge3 < 1))
  {
    return -1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int edge1 = 0;
  int edge2 = 0;
  int edge3 = 0;
  int ret = 0;
  printf("请输入3条边的长度(整数):>");
  scanf("%d %d %d", &edge1, &edge2, &edge3);
  ret = Judge(edge1, edge2, edge3);
  if (1 == ret)
  {
    printf("由边长为%d、%d、%d的3条边能组成一个直角三角形\n", edge1, edge2, edge3);
  }
  else if (0 == ret)
  {
    printf("由边长为%d、%d、%d的3条边不能组成一个直角三角形\n", edge1, edge2, edge3);
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