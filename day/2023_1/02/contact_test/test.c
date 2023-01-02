#include "contact.h"

void menu()
{
  printf("1.ADD\n");
  printf("2.DEL\n");
  printf("3.SEARCH\n");
  printf("4.MODIFY\n");
  printf("5.SHOW\n");
  printf("6.SORT\n");
  printf("0.EXIT\n");
}

int main()
{
  int input = 0;
  struct Contact con;
  InitContact(&con);
  do
  {
    menu();
    printf("请选择:>");
    scanf("%d", &input);
    switch (input)
    {
      case ADD:
        AddContact(&con);
        break;
      case DEL:
        DelContact(&con);
        break;
      case SEARCH:
        SearchContact(&con);
        break;
      case MODIFY:
        ModifyContact(&con);
        break;
      case SHOW:
        ShowContact(&con);
        break;
      case SORT:
        break;
      case EXIT:
        printf("已成功退出!\n");
        break;
      default:
        printf("输入有误，请重新输入!\n");
        break;
    }
  } while (input);
}