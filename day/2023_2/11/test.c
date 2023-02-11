/* #include <stdio.h>
#include <windows.h>

void Bug()
{
  printf("This is Bug()!\n");
  Sleep(10000);
}

int MyAdd(int a, int b)
{
  printf("This is MyAdd()!\n");
  int c = 0;
  printf("before:%d\n", b);
  *(&a+1) = 100;
  printf("after:%d\n", b);
  *(&a-1) = (int)Bug;
  c = a + b;
  return c;
}

int main()
{
  int x = 0xA;
  int y = 0xB;
  int z = 0;

  z = MyAdd(x, y);
  printf("%d\n", z);
  return 0;
} */

#include <stdio.h>
#include <windows.h>

/* int FindMaxData(int num, ...)
{
  int max = 0;
  int i = 1;

  va_list arg;
  va_start(arg, num);
  max = va_arg(arg, int);
  for (i=1; i<num; i++)
  {
    int curr = va_arg(arg, int);
    if (curr > max)
    {
      max = curr;
    }
  }

  va_end(arg);
  
  return max;
} */

int main(/* int argc, char *argv[], char *envp[] */)
{
/*   int max = 0;
  max = FindMaxData(5, 0x11, 0x21, 0x31, 0x41, 0x51);
  printf("max = %d\n", max); */
 /*  int i = 0;
  for (i=0; i<argc; i++)
  {
    printf("argc[%d]:%s\n", i, argv[i]);
  } */
/*   int i = 0;
  for (i=0; envp[i]; i++)
  {
    printf("envp[%d]:%s\n", i, envp[i]);
  } */
/*   printf("main()\n");
  Sleep(1000);
  main(); */

  
  return 0;
}