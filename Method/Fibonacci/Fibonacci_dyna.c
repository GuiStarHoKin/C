#include <stdio.h>
#include <windows.h>

int Fibonacci(int n)
{
  int *p = (int*)malloc(sizeof(int)*(n+1));
  int ret = 0;
  
  if (NULL == p)
  {
    perror("Fibonacci()\n");
    return -1;
  }

  p[1] = 1;
  p[2] = 1;
  int i = 3;

  while(i <= n)
  {
    p[i] = p[i-1] + p[i-2]; 
    i++;
  }
  ret = p[n];
  free(p);
  p = NULL;
  return ret;
}

int main()
{
  int n = 42;
  int ret = 0;
  double start = 0.0;
  double end = 0.0;

  start = GetTickCount();
  ret = Fibonacci(n);
  end = GetTickCount();

  printf("Fib(%d):%d time:%lf s\n", n, ret, (end-start)/1000);
  system("pause");
  return 0;
}