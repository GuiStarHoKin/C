#include <stdio.h>
<<<<<<< HEAD
#include <windows.h>
=======
>>>>>>> 846865913a1fd1662e713e51f5a713bd1adba047

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
<<<<<<< HEAD
  printf("你好\n");
  system("pause");
=======
>>>>>>> 846865913a1fd1662e713e51f5a713bd1adba047
  return 0;
}