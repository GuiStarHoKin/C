#include <stdio.h>
#include <unistd.h>

int main()
{
  int s = 0;
  int i = 0;
  printf("请输入你想要的倒计时（秒）:>");
  scanf("%d", &s);
  setbuf(stdout, NULL); // 关闭输出缓冲区，以免很久不输出内容
  for(i=s; i>=0; i--)
  {
    printf("[%2d]秒\r", i);
    sleep(1); // 1s
  }
  return 0;
}