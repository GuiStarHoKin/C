#include <stdio.h>
#include <ctype.h>

int main()
{
  char ch = '2';
  int ret = islower(ch);
  ret =isdigit(ch);
  printf("%d\n",ret); // retunr non-zero表示符合条件
  return 0;
}
/*
字符分类函数
iscntrl
isspace
isdigit
isxdigit
islower
isupper
isalpha
isalnum
ispunct
isgraph
isprint
----
字符转换函数
tolower()
toupper()
*/