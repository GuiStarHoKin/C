#include <stdio.h>
/*
int main()
{
  char buf[1024] = {0};
  fgets(buf, 1024, stdin);// 从标准输入流读取
  fputs(buf, stdout);//输出到标准输出流
  return 0;
}
*/

int main()
{
  char buf[1024] = {0};
  gets(buf);
  puts(buf);
  return 0;
}