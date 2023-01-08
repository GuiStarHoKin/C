/*编写 C 语言程序，从键盘读入一个整数，如果该整数是 0 至 6 的范围，则相应输出“星期天”至
“星期六”到屏幕，如果该整数不是在 0 至 6 的范围，则输出“非法数据”
。运行过程如图 3- 7 所示。*/
#include <stdio.h>

enum Option
{
  SUN,
  MON,
  TUES,
  WED,
  THUR,
  FRI,
  SAT,
};

int main()
{
  int option = 0;
  printf("请输入一个整数:>");
  scanf("%d", &option);
  switch (option)
  {
    case SUN:
      printf("星期天\n");
      break;
    case MON:
      printf("星期一\n");
      break;
    case TUES:
      printf("星期二\n");
      break;
    case WED:
      printf("星期三\n");
      break;
    case THUR:
      printf("星期四\n");
      break;
    case FRI:
      printf("星期五\n");
      break;
    case SAT:
      printf("星期六\n");
      break;
    default:
      printf("非法数据\n");
      break;
  }
  return 0;
}