/* 编写 C 语言程序，从键盘读入一个八进制整数，然后分别以十进制和十六进制的格式输出该
整数到屏幕。运行过程如图 4- 2 所示。 */

#include <stdio.h>

int main()
{
  int num = 0;
  printf("请输入一个八进制整数:>");
  scanf("%o", &num);
  printf("八进制数:%o\n", num);
  printf("十进制数:%d\n", num);
  printf("十六进制数:%X\n", num);
  return 0;
}