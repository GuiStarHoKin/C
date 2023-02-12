#include <stdio.h>
#include <windows.h>

int Fibonnacci(int n)
{
  int first = 1;
  int second = 1;
  int third = 1;

  while (n>=3)
  {
    third = second + first;
    first = second;
    second = third;
    n--;
  }

  return third;
}

int main()
{
  int n = 10;
  int ret = 0;
  double start = 0.0;
  double end = 0.0;

  ret = Fibonnacci(n);
  printf("Fib(%d):%d time:%lf S\n", n, ret, (end-start)/1000);

  system("pause");
  return 0;
}