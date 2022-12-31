#include <stdio.h>

int check_sys()
{
  union Un
  {
    char c;
    int i;
  }u;
  u.i = 1; // 01 00 00 00
  // 返回1表示小端
  // 返回0表示大端
  return u.c;
}

enum Gender
{
  MALE,
  FEMALE,
  SECRET
};

int main()
{
  int ret = check_sys();
  if(1 == ret)
  {
    printf("小端\n");
  }
  else
  {
    printf("大端\n");
  }
  enum Gender g = MALE;
  printf("%ld\n", sizeof(g));
  return 0;
}