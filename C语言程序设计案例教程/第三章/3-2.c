/*编写 C 语言程序，从键盘读入 3 个整数并求和，然后输出结果到屏幕。运行过程如图 3- 2 所示。*/
#include <stdio.h>

int Add(int num1, int num2, int num3)
{
  return (num1 + num2 + num3);
}

int main()
{
  int ret = 0;
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  printf("第1个数:");
  scanf("%d", &num1);
  printf("第2个数:");
  scanf("%d", &num2);
  printf("第3个数:");
  scanf("%d", &num3);
  ret = Add(num1, num2, num3);
  printf("%d + %d + %d = %d\n",num1, num2, num3, ret);
  return 0;
}