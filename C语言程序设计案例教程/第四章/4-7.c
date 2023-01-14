/* 某学校对学生的评价标准如下(假设只有语文、数学和英语 3 门课程，分数是 100 分制的整数)：
三门课的平均分不低于 80，且至少有一门课不低于 90，则评为“优秀”；
每一门课都不低于 75，则评为“良好”；
三门课的平均分不低于 60，且至多只有一门课低于 60，则评为“合格”；
如果不是“优秀”、“良好”、“合格”之一，则评为“不合格”。
编写 C 语言程序，从键盘读入 3 门课程成绩，然后输出相应的评价等级。评定原则是“就高不就低”
，即如果同时满足优秀和良好，则评为优秀。如果分数小于 0 或大于 100，则输出“非法数据”。
运行过程如图 4- 7 所示。 */

#include <stdio.h>

int Judge(int Chinese, int math, int English)
{
  if (((Chinese + math + English) / 3 >= 80) && ((Chinese >= 90) || (math >= 90) || (English >= 90)))
  {
    return 0; // 优秀
  }
  else if ((Chinese >= 75) && (math >= 75) && (English >= 75))
  {
    return 1;
  }
  else if (((Chinese + math + English) / 3 >= 60) && ((Chinese >= 60) && (math >= 60)) ||
    (Chinese >= 60) && (English >= 60) ||
    (English >= 60) && (math >= 60))
  {
    return 2; // 合格
  }
  else if ((Chinese || math || English) < 0 || (Chinese || math || English) > 100)
  {
    return -1; // 非法数据
  }
  else
  {
    return 3; // 不及格
  }
}

int main()
{
  int Chinese = 0;
  int math = 0;
  int English = 0;
  int ret = 0;
  printf("语文成绩:>");
  scanf("%d", &Chinese);
  printf("数学成绩:>");
  scanf("%d", &math);
  printf("英语成绩:>");
  scanf("%d", &English);
  ret = Judge(Chinese, math, English);
  if (-1 == ret)
  {
    printf("非法数据!\n");
  }
  else if (0 == ret)
  {
    printf("优秀\n");
  }
  else if (1 == ret)
  {
    printf("良好\n");
  }
  else if (2 == ret)
  {
    printf("合格\n");
  }
  else if (3 == ret)
  {
    printf("不合格\n");
  }
  else
  {
    printf("oops!\n");
  }
  return 0;
}