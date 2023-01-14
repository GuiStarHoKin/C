/* 编写 C 语言程序，从键盘读入一个整数 n，然后按照从小到大的顺序输出前 n 个奇数到屏幕，n
个奇数使用 n-1 个逗号分隔，最后一个数的后面没有逗号。如果整数 n 小于 1，则输出“非法数据”。
运行过程如图 4- 8 所示。 */

#include <stdio.h>


// 方法一
void PrintOdd(int n)
{
  int i = 0;
  if (n < 1)
  {
    printf("非法数据\n");
  }
  while (i < n)
  {
    printf("%d", i*2+1);
    if (i < n-1)
    {
      printf(",");
    }
    i++;
  }
  printf("\n");

}

//方法二
/* void PrintOdd(int n)
{
  int i = 0;
  if (n < 1)
  {
    printf("非法数据\n");
  }
  while (i < n-1)
  {
    printf("%d,", i*2+1);
    i++;
  }
  if (i == n-1)
  {
    printf("%d", i*2+1);
  }
  printf("\n");
} */


int main()
{
  int n = 0;
  printf("请输入一个整数:>");
  scanf("%d", &n);
  PrintOdd(n);
  return 0;
}