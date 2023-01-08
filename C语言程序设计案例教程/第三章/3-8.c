/*某学校使用等级制评定学生成绩，原来的百分制按照如下规则转换为等级制：95 分及以上评为 A，
85 分及以上评为 B，70 分及以上评为 C,60 分及以上评为 D, 60 分以下评为 E。
编写 C 语言程序，从键盘读入一个代表百分制成绩的整数，然后输出相应的等级成绩。如果分数
小于 0 或大于 100，则输出“非法数据”。运行过程如图 3- 8 所示。
要求使用两种方法完成：
(1) 第一种方法使用“大于或等于”以及“大于”这两种关系运算符，不能使用“小于或等
于”以及“小于”这两种关系运算符；
(2) 第二种方法使用“小于或等于”以及“小于”这两种关系运算符，不能使用“大于或等
于”以及“大于”这两种关系运算符。*/
/*
#include <stdio.h>

int main()
{
  int score = 0;
  printf("请输入一个整数成绩:>");
  scanf("%d", &score);
  if (score > 100)
  {
    printf("非法数据\n");
  }
  else if (score >= 95)
  {
    printf("A\n");
  }
  else if (score >= 85)
  {
    printf("B\n");
  }
  else if (score >= 70)
  {
    printf("C\n");
  }
  else if (score >= 60)
  {
    printf("D\n");
  }
  else if (score >= 0)
  {
    printf("E\n");
  }
  else
  {
    printf("非法数据\n");
  }
  return 0;
}*/

#include <stdio.h>

int main()
{
  int score = 0;
  printf("请输入一个整数成绩:>");
  scanf("%d", &score);
  if (score < 0)
  {
    printf("非法数据\n");
  }
  else if (score < 60)
  {
    printf("E\n");
  }
  else if (score < 70)
  {
    printf("D\n");
  }
  else if (score < 85)
  {
    printf("C\n");
  }
  else if (score < 95)
  {
    printf("B\n");
  }
  else if (score <= 100)
  {
    printf("A\n");
  }
  else
  {
    printf("非法数据\n");
  }
  return 0;
}