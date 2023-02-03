#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stu
{
  char *name;
  int score;
}Stu;

int main()
{
  Stu zhangsan = {NULL, 0};
  zhangsan.name = (char*)malloc(sizeof(Stu));
  strcpy(zhangsan.name, "tom");
  system("pause");
  return 0;
}