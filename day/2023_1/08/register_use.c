#include <stdio.h>
#include <time.h>




int main()
{
  double duration = 0;
  clock_t start, finish;
  register long i = 10000000L;
  start = clock();
  while (i--)
  {
    NULL;
  }
  finish = clock();
  duration = (double)(finish - start);
  printf("time:%f\n", duration);
  return 0;
}