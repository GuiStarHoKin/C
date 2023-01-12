/* “鸡兔同笼”问题是中国古代的数学名题之一。大约在 1500 年前，
《孙子算经》中就记载了
这个有趣的问题。书中是这样叙述的：
今有雉兔同笼，上有三十五头，下有九十四足，问雉兔各几何？
这 4 句话的意思是：有若干只鸡兔同在一个笼子里，从上面数，有 35 个头，从下面数，有
94 条腿。问笼中各有多少只鸡和兔？
编写 C 语言程序，从键盘读入代表头的总数量的整数 head 以及代表腿的总数量的整数 leg，
然后计算鸡和兔的数量并输出结果到屏幕。如果有多个解，则只需要输出一个解即可。如果无解，
则输出“本题无解”
。如果 head 小于 2 或 leg 小于 6，则输出“非法数据”
。这里约定鸡和兔的数
量都是不少于一只。运行过程如图 3- 18 所示。 */

#include <stdio.h>

int main()
{
  int head = 0;
  int leg = 0;
  int chick = 1;
  int rabbit = 1;
  printf("鸡兔同笼，头的总数:>");
  scanf("%d", &head);
  printf("鸡兔同笼，腿的总数:>");
  scanf("%d", &leg);
  if ((head < 2) || (leg < 6))
  {
    printf("非法数据\n");
  }
  while (chick < head)
  {
    rabbit = head - chick;
    if (((chick * 2) + (rabbit * 4)) == leg)
    {
      break;
    }
    chick++;
  }
  if (chick == head)
  {
    printf("本题无解\n");
  }
  else
  {
    printf("鸡:%d只,兔:%d只\n", chick, rabbit);
  }
  return 0;
}