#include <stdio.h>

void test()
{
  printf("test():%p\n", &test);
}

int main()
{
  test();
  printf("test:%p\n", &test);
  void (*p)() = &test;
  printf("%p\n", p);
  return 0;
}