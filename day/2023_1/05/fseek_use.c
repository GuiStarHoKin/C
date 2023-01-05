// int fseek(FILE *stream, long offset, int origin);
// fseek、ftell、rewind
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
  FILE *pf = fopen("test.txt", "r");
  if (pf == NULL)
  {
    printf("%s\n", strerror(errno));
    return 0;
  }
  // 1.定位文件指针
  //fseek(pf, 4, SEEK_CUR); // 指针当前位置 1
  //fseek(pf, 4, SEEK_SET); // 文件开始位置 0 
  fseek(pf, -2, SEEK_END); // 文件结束位置 2
  int pos = ftell(pf);
  printf("%d\n", pos);
  // 2.读取文件
  int ch = fgetc(pf);
  printf("%c\n", ch);
  rewind(pf);
  ch = fgetc(pf);
  printf("%c\n", ch);
  pos = ftell(pf);
  printf("%d\n", pos);
  fclose(pf);
  pf = NULL;
  return 0;
}
