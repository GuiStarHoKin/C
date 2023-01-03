// FILE* fopen(const char *filename, const char *made);
// int fclose(FILE *stream);
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

int main()
{
  FILE* pf = fopen("test.txt", "r");
  if (pf == NULL)
  {
    printf("%s\n", strerror(errno));
    exit(0);
  }
  //打开文件
  //读文件
  //关闭文件
  fclose(pf);
  pf == NULL;
  return 0;
}