#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

struct s
{
  int i;
  float f;
  char arr[10];
};

int main()
{
  struct s S = {100, 3.14f, "hello"};
  FILE* pf = fopen("test3.txt", "w");
  if (pf == NULL)
  {
    printf("%s\n", strerror(errno));
    exit(0);
  }
  // 以格式化形式写文件
  fprintf(pf, "%d %f %s", S.i, S.f, S.arr);
  fclose(pf);
  pf = NULL;
  return 0;
}