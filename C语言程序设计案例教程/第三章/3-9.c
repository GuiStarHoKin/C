/*编写 C 语言程序，从键盘读入一个整数，然后判断该整数是奇数或者偶数，并输出结果到屏幕。
如果该整数小于 0，则输出“非法数据”。运行过程如图 3- 10 所示。*/

#include <stdio.h>

int Judge(int num)
{
  if ((num % 2) == 0)
  {
    return 0;// 是偶数
  }
  else
  {
    return 1;// 是奇数
  }
}

int main()
{
  int ret = 0;
  int num = 0;
  printf("请输入一个整数:>");
  scanf("%d", &num);
  if (num < 0)
  {
    printf("非法数据\n");
    return 0;
  }
  ret = Judge(num);
  if (0 == ret)
  {
    printf("%d是偶数\n", num);
  }
  else if (1 == ret)
  {
    printf("%d是奇数\n", num);
  }
  return 0;
}