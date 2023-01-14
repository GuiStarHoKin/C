/* 编写 C 语言程序，从键盘读入一个整数 n，然后输出 n 的反序到屏幕。如果整数 n 小于 1，则输出
“非法数据”。运行过程如图 4- 9 所示。
要求：使用 long long 类型。 */

#include <stdio.h>

void PrintReverse(long long n)
{
  if (n < 1)
  {
    printf("非法数据\n");
  }
  else
  {
    printf("%lld的反序:", n);
    while (n > 0)
    {
      printf("%lld", n % 10); // 每次拿到个位
      n /= 10; // 每次去掉拿到的那位
    }
    printf("\n");
  }
}

int main()
{
  long long n = 0;
  printf("请输入一个整数:>");
  scanf("%lld", &n);
  PrintReverse(n);
  return 0;
}