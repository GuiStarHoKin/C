#include <stdio.h>
#include <windows.h>

int fib(int n)
{
  if ((n == 1) || (n == 2))
  {
    return 1;
  }
  return fib(n-1) + fib(n-2);
}

int main()
{
  int n = 80;
  int ret = 0;
  
  double start = GetTickCount();
  ret = fib(n);
  double end = GetTickCount();

  printf("fib(%d):%d time:%lf S\n", n, ret, (end - start)/1000);

  system("pause");
  return 0;
}