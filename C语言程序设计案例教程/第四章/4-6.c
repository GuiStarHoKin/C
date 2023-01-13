/* 编写 C 语言程序，从键盘读入一个字符，然后输出该字符对应的 ASCII 编号的十进制数值和
十六进制数值(后面显示字母’H’加以区分)到屏幕，并判断该字符的类型：
如果该字符是大写字母，则输出“属于大写字母”
如果该字符是小写字母，则输出“属于小写字母”
如果该字符是数字，则输出“属于数字”
如果该字符不是以上 3 种类型，则输出“属于其它字符”
运行过程如图 4- 6 所示。 */

#include <stdio.h>

int Judge(char ch)
{
  if ((ch >= 'a') && (ch <= 'z'))
  {
    return 2;
  }
  else if ((ch >= 'A') && (ch <= 'Z'))
  {
    return 1;
  }
  else if ((ch >= '0') && (ch <= '9'))
  {
    return 3;
  }
  else
  {
    return 0;
  }
}

int main()
{
  char ch = 0;
  int ret = 0;
  printf("请输入一个ASCII字符:>");
  scanf("%c", &ch);
  ret = Judge(ch);
  if (ret == 1) // 大写字母
  {
    printf("字符'%c'的ASCII编号是%d[%XH],属于大写字母\n", ch, ch, ch);
  }
  else if (ret == 2) // 小写字母
  {
    printf("字符'%c'的ASCII编号是%d[%XH],属于小写字母\n", ch, ch, ch);
  }
  else if (ret == 3) // 数字
  {
    printf("字符'%c'的ASCII编号是%d[%XH],属于数字\n", ch, ch, ch);
  }
  else if (ret == 0) // 其他符号
  {
    printf("其他符号\n");
  }
  else
  {
    printf("oops!\n");
  }
  return 0;
}