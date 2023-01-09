/*编写 C 语言程序，从键盘读入一个整数 n，然后按照从小到大的顺序输出前 n 个奇数到屏幕，每
个奇数占一行。如果整数 n 小于 1，则输出“非法数据”。运行过程如图 3- 12 所示。*/

/*更适合自己
#include <stdio.h>

void PrintOdd(int n)
{
  int i = 0;
  if (n < 1)
  {
    printf("非法数据\n");
    return;
  }
  for (i=0; i<n*2; i++) // n*2个数->n个奇数，n个偶数 创建数字去寻找
  {
    if (i % 2 != 0)
    {
      printf("%d\n", i);
    }
  }
}

int main()
{
  int n = 0;
  printf("请输入一个整数:>");
  scanf("%d", &n);
  PrintOdd(n);
  return 0;
}*/

#include <stdio.h>

void PrintOdd(int n)
{
  int i = 0;
  if (n < 1)
  {
    printf("非法数据\n");
  }
  else
  {
    while (n > 0)
    {
      printf("%d\n", i*2+1); // 打造想要的数字
      i++;
      n -= 1;
    }
  }
}

int main()
{
  int n = 0;
  printf("请输入一个整数:>");
  scanf("%d", &n);
  PrintOdd(n);
  return 0;
}