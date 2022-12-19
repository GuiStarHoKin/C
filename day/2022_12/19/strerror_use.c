// char* strerror(int errnum); 把错误码->错误信息
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
  int i;
  for(i = -5;i < 140;i++)
  {
    char* ret = strerror(i); // 0-133之间有错误码，共有134个错误码
    printf("%s\n",ret);
  }
  /*
  真实使用场景
  #include <errno.h>
  errno是一个全局的错误码变量
  当C语言的的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
  */
  printf("****************\n");
  FILE* pf = fopen("test.txt","r");
  if(pf == NULL)
  {
    printf("%s\n",strerror(errno));
  }
  else
  {
    printf("打开文件成功!\n");
  }
  return 0;
}
