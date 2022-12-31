#include <stdio.h>

int check_sys(int a)
{
  return *(char*)&a;
}

int main()
{
  int a = 1;
  int ret = check_sys(a);
  if(1 == ret)
  {
    printf("小端\n");
  }
  else
  {
    printf("大端\n");
  }
  return 0;
}