#ifdef DEBUG
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
long i = 10000000L;
clock_t start, finish;
double duration;
/* 测量一个事件持续的时间*/
printf( "Time to do %ld empty loops is ", i) ;
start = clock();
while( i-- );
finish = clock();
duration = (double)(finish - start) / CLOCKS_PER_SEC;
printf( "%f seconds\n", duration );
system("pause");
}
#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  long i = 10000000L;
  double duration;
  clock_t start, finish;
  start = clock();
  while (i--)
  {
    printf("%ld\n", i);
  }
  finish = clock();
  duration = (double)(finish-start);
  printf("%f seconds\n", duration);
  return 0;
}