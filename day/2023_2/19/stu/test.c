// qsort((*stu))传入给compare的是*stu
// 运算符优先级第一梯队：() [] ->
// 运算符优先级第二梯队: *

#include "stu.h"

static void Menu(void)
{
  printf("请选择要排序的方式:>\n");
  printf("********1.按姓名排序********\n");
  printf("********2.按学号排序********\n");
  printf("******* 3.按总成绩排序 *****\n");
  printf("********   0.退出   *******\n");
}

int main()
{
  int input = 0;
  int n = 0;
  
  printf("请输入要输入的学生的个数:>");
  scanf("%d", &n);
  student *stu;
  StuInit(&stu, n);
  StuScanf(&stu, n);
  do
  {

    Menu();
    scanf("%d", &input);
    switch(input)
    {
      case EXIT:
        StuDestory(stu);
        printf("退出成功!\n");
        break;
      case ByName:
        QsortByName(&stu, n);
        Print(&stu, n);
        break;
      case ById:
        QsortById(&stu, n);
        Print(&stu, n);
        break;
      case ByScore:
        QsortByScore(&stu, n);
        Print(&stu, n);

        break;
      default:
        printf("输入有误,请重新输入!\n");
        break;
    }

  }while(input);

  system("pause");
  return 0;
}