// 演示输出缓冲区
#include <stdio.h>
#include <unistd.h> // #include <windows.h> -- Sleep() ms

int main()
{
  while (1)
  {
    sleep(1); // 1s输出一个hehe到输出缓冲区
    printf("hehe");
  }
  return 0;
}