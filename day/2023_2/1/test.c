#include <stdio.h>
#include <windows.h>

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
  printf("你好\n");
  system("pause");
  return 0;
}