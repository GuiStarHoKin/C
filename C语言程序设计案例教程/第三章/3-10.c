/*平年与闰年的判断标准如下：
如果年份是 100 的倍数，且能被 400 整除，则该年份是闰年；
如果年份不是 100 的倍数，且能被 4 整除，则该年份是闰年；
如果以上都不满足，则该年份为平年。
编写 C 语言程序，从键盘读入一个代表年份的整数，然后判断该年份是平年或闰年并输出结果到
屏幕。如果年份小于等于 0，则输出“非法数据”
。运行过程如图 3- 10 所示。*/

#include <stdio.h>

int Judge(int year)
{
  if ((year % 100 == 0) && (year % 400) == 0)
  {
    return 0; // 闰年
  }
  else if ((year % 100 != 0) && (year % 4 == 0))
  {
    return 0;
  }
  else if (year <= 0)
  {
    return -1; // 非法
  }
  else
  {
    return 1; // 平年
  }
}

int  main()
{
  int year = 0;
  int ret = 0;
  printf("请输入年份:>");
  scanf("%d", &year);
  ret = Judge(year);
  if (ret == 0)
  {
    printf("%d是闰年\n", year);
  }
  else if (ret == 1)
  {
    printf("%d是平年\n", year);
  }
  else
  {
    printf("非法数据\n");
  }
  return 0;
}
