#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

struct S
{
  int i;
  float f;
  char arr[10];
};

int main()
{
  struct S s = {0};
  FILE* pf = fopen("test3.txt", "r");
  if (pf == NULL)
  {
    printf("%s\n", strerror(errno));
    exit(0);
  }
  fscanf(pf, "%d %f %s", &(s.i), &(s.f), s.arr);
  fclose(pf);
  pf = NULL;
  printf("%d %f %s\n", s.i, s.f, s.arr);
  return 0;
}