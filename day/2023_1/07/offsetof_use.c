#include <stdio.h>
#include <stddef.h>

struct S
{
  char c1;
  int i;
  char c2;
};

int main()
{
  struct S s;
  printf("%ld\n", offsetof(struct S, c1));
  printf("%ld\n", offsetof(struct S, i));
  printf("%ld\n", offsetof(struct S, c2));
  return 0;
}