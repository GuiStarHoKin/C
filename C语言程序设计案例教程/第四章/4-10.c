/* 编写 C 语言程序，从键盘读入一个整数 n，然后输出 n 的反序的 2 倍到屏幕。如果整数 n 小于 1，
则输出“非法数据”。运行过程如图 4- 10 所示。
要求：使用 long long 类型。 */

#include <stdio.h>

void Print2Reverse(long long n)
{
  if (n < 1)
  {
    printf("非法数据\n");
  }
  else
  {
    long long tmp = 0;
    while (n > 0)
    {
      tmp = tmp * 10 + n % 10;
      n /= 10;
    }
    printf("%lld * 2 = %lld\n", tmp, tmp*2);
  }
}

int main()
{
  long long n = 0;
  printf("请输入一个整数:>");
  scanf("%lld", &n);
  Print2Reverse(n);
  return 0;
}