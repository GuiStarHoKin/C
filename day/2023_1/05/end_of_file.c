#include <stdio.h>

int main()
{
  int ch = 0;
  FILE *pf = fopen("test.txt", "r");
  if (pf == NULL)
  {
    perror("open file test.txt");
  }
  // 读文件
  while ((ch = fgetc(pf)) != EOF)
  {
    putchar(ch);
  }
  if (ferror(pf)) // 文件错误结束
  {
    printf("\nerror\n");
  }
  else if (feof(pf)) // 文件正常读取完毕结束
  {
    printf("\nEnd Of File\n");
  }
  fclose(pf);
  pf = NULL;
  return 0;
}