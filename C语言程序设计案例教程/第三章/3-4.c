/*编写 C 语言程序，从键盘读入一个字符，然后输出该字符对应的 ASCII 编号到屏幕。运行过
程如图 3- 4 所示。*/
#include <stdio.h>

int main()
{
  char ch;
  printf("请输入一个字符:");
  scanf("%c", &ch);
  printf("字符'%c'的ASCII编号是:%d\n", ch, ch);
  return 0;
}