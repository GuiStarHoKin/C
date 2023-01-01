// void* malloc(size_t size);
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

int main()
{
  //向内存申请10个整型的空间
  int *p = (int*)malloc(10*sizeof(int));
  //int *p = (int*)malloc(9999999999999999);
  if (p == NULL)
  {
    // 打印错误原因的一个方式
    printf("%s\n",strerror(errno));
  }
  else
  {
    int i = 0;
    for(i=0; i<10; i++)
    {
      *(p + i) = i;
    }
    for(i=0; i<10; i++)
    {
      printf("%d ", *(p + i));
    }
    printf("\n");
  }
  return 0;
}