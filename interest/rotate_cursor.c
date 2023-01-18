#include <stdio.h>
#include <unistd.h>

int main()
{
  const char *p = "|/-\\";
  int index = 0;
  setbuf(stdout, NULL); // 把标准输出流设置为空，关闭输出缓冲区，否则将要等缓冲区满了才能输出字符
  while (1)
  {
    index %= 4; // 0、1、2、3
    printf("[%c]\r", p[index]); // /r为回车,光标回到当前行首
    index++;
    sleep(1); // 1s
  }// end while
  return 0;
}