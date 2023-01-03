/*
动态增长的版本
默认可以存放3个人的信息
当发现当前通讯录满的时候，我们进行扩容，每次增加2个空间
*/
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
        // 销毁通讯录-释放动态开辟的内存
        DestroyContact(&con);
        printf("已成功退出!\n");
        break;
      default:
        printf("输入有误，请重新输入!\n");
        break;
    }
  } while (input);
}