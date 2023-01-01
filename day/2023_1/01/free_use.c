// void* free(void* ptr);
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
  int *p = (int*)malloc(10*sizeof(int));
  if (p == NULL)
  {
    printf("%s\n", strerror(errno));
  }
  else
  {
    int i = 0;
    for (i=0; i<10; i++)
    {
      *(p + i) = i;
    }
    for (i=0; i<10; i++)
    {
      printf("%d ", *(p + i));
    }
    printf("\n");
    //当动态申请的空间不再使用的时候
    //就应该还给操作系统
    free(p);
    // free后指针的地址没有改变，只是还给操作系统了，所以需要手动置空指针
    p = NULL;
  }
  return 0;
}