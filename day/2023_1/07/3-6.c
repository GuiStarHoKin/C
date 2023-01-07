/*
#include <stdio.h>

int Min(int num1, int num2, int num3)
{
  int min = 0;
  if (num1 > num2)
  {
    min = num2;
  }
  else
  {
    min = num1;
  }
  if (min > num3)
  {
    min = num3;
  }
  return min;
}

int main()
{
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int min = 0;
  printf("第1个数:>");
  scanf("%d", &num1);
  printf("第2个数:>");
  scanf("%d", &num2);
  printf("第3个数:>");
  scanf("%d", &num3);
  min = Min(num1, num2, num3);
  printf("最小值为:%d\n", min);
  return 0;
}*/

#include <stdio.h>

int Min(int num1, int num2, int num3)
{
  int min = num1;
  if (min > num2)
  {
    min = num2;
  }
  else if (min > num3)
  {
    min = num3;
  }
  return min;
}

int main()
{
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int min = 0;
  printf("第1个数:>");
  scanf("%d", &num1);
  printf("第2个数:>");
  scanf("%d", &num2);
  printf("第3个数:>");
  scanf("%d", &num3);
  min = Min(num1, num2, num3);
  printf("min:%d\n", min);
  return 0;
}