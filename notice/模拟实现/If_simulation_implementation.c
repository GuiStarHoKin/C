#include <stdio.h>

int show()
{
  printf("you can see me!\n");
  return 1;
}

int main()
{
  int flag = 0;
  printf("please Enter:>");
  scanf("%d", &flag);
  //flag && show(); // if flag==1 执行show  if(flag){show()}
  flag || show(); // if(flag){null} else{show()}
  return 0;
}