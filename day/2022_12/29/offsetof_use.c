// offsetof是宏，不是函数
// size_t offsetof(structName, memberName);
#include <stdio.h>
#include <stddef.h>

struct S
{
  char c;
  int i;
  double d;
};

int main()
{
  printf("%ld\n",offsetof(struct S, c));
  printf("%ld\n",offsetof(struct S, i));
  printf("%ld\n",offsetof(struct S, d));
  return 0;
}