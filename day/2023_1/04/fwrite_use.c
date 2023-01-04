// size_t fwrite(const void* buffer, size_t size, size_t count, FILE* stream);
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

struct S
{
  char name[20];
  int age;
  double score;
};

int main()
{
  struct S s = {"张三", 20, 3.14};
  struct S tmp = {0};
  //FILE* pWriteB = fopen("test4.txt", "wb");
  FILE* pReadB = fopen("test4.txt", "rb");
  if (/*(pWriteB == NULL) &&*/ (pReadB == NULL))
  {
    printf("%s\n", strerror(errno));
    exit(0);
  }
  // 二进制的形式写文件
  //fwrite(&s, sizeof(struct S), 1, pWriteB);
  // 二进制的形式读文件
  fread(&tmp, sizeof(struct S), 1, pReadB);
  printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
  //fclose(pWriteB);
  fclose(pReadB);
  //pWriteB = NULL;
  pReadB = NULL;
  return 0;
}