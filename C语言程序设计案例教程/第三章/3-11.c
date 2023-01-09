#include <stdio.h>

char Change(char ch)
{
  if ((ch >= 65) && (ch <= 97))
  {
    return ch += 32;
  }
  else if ((ch >= 97) && (ch <= 122))
  {
    return ch-= 32;
  }
  else
  {
    return 0;
  }
}

int main()
{
  char ch = 0;
  char ret = 0;
  printf("请输入一个字母:>");
  scanf("%c", &ch);
  ret = Change(ch);
  if ((ret >= 65) && (ret <= 97))
  {
    printf("%c是小写字母,对应的大写字母是:%c\n", ch, ret);
  }
  else if ((ret >= 97) && (ret <= 122))
  {
    printf("%c是大写字母,对应的小写字母是:%c\n", ch ,ret);
  }
  else
  {
    printf("非法数据\n");
  }
  return 0;
}