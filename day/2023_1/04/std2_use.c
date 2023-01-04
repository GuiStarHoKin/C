#include <stdio.h>

struct S
{
  int i;
  float f;
  char arr[1024];
};

int main()
{
  struct S s = {0};
  fscanf(stdin, "%d %f %s", &(s.i), &(s.f), s.arr);
  fprintf(stdout, "%d %.2f %s\n", s.i, s.f, s.arr);
  return 0;
}