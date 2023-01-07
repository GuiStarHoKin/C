/*编写 C 语言程序，从键盘读入 2 个整数，如果这 2 个整数的数值相等，则输出“相等”的信
息到屏幕，否则输出“不相等”的信息。运行过程如图 3- 3 所示。*/
#include <stdio.h>

int Judge(int num1, int num2)
{
  if (num1 == num2)
  {
    return 0;// 相等
  }
  else
  {
    return -1;//不相等
  }
}

int main()
{
  int num1 = 0;
  int num2 = 0;
  int ret = 0;
  printf("第1个数:");
  scanf("%d", &num1);
  printf("第2个数:");
  scanf("%d", &num2);
  ret = Judge(num1, num2);
  if (0 == ret)
  {
    printf("%d 与 %d 相等\n",num1, num2);
  }
  else
  {
    printf("%d 与 %d 不相等\n",num1, num2);
  }
  return 0;
}