#include "contact.h"

void menu()
{
  printf("1.ADD\n");
  printf("2.DEL\n");
  printf("3.SEARCH\n");
  printf("4.MODIFY\n");
  printf("5.SHOW\n");
  printf("6.SORT\n");
  printf("7.SAVE\n");
  printf("0.EXIT\n");
}

int main()
{
  int input = 0;
  
  Contact con;
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
      case SAVE:
        SaveContact(&con);
        break;
      case EXIT:
        SaveContact(&con);
        DestroyContact(&con);
        printf("退出成功!\n");
        break;
      default:
        printf("输入有误，请重新输入！\n");
        break;
    }// end "swtich (input)"
  } while (input);// end "do-while (input)"
}