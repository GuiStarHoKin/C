/*编写 C 语言程序，计算 3 个整数的和，然后按照图 3- 1 所示格式输出结果到屏幕。*/
#include <stdio.h>

int Add(int a, int b, int c)
{
  int sum = 0;
  sum = a + b + c;
  return sum;
}

int main()
{
  int ret = 0;
  int a = 0;
  int b = 0;
  int c = 0;
  scanf("%d %d %d", &a, &b, &c);
  ret = Add(a, b, c);
  printf("%d + %d + %d = %d\n", a, b, c, ret);
  return 0;
}