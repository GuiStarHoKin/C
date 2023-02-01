#include <stdio.h>
#include <string.h>

#define MAX 32
#define NAME "小学生"
#define PASSWD "12345"

void Welcome()
{
  printf("Welcome!\n");
}

void GetGift()
{
  printf("恭喜你,获得玄黄皮肤!\n");
}

void Login(void (*WelcomeP)(), void (*GetGiftP)())
{
  char name[MAX];
  char passwd[MAX];
  printf("Please Enter Your Name:>");
  scanf("%s", name);
  printf("Plese Enter Your Passwd:>");
  scanf("%s", passwd);
  if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0)
  {
    WelcomeP();
    GetGiftP();
  }
  else
  {
    printf("oops!\n");
  }
}

int main()
{
  Login(Welcome, GetGift);
  return 0;
}