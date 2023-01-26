#include <stdio.h>
#include <string.h>

#define STR(X) #X
#define TOSTRING(X) #X
#define CONT(BASE, N) BASE##e##N
int main()
{
/* #line 50 "hehe.c"
  printf("%s %d\n", __FILE__, __LINE__);  
  return 0; */
  printf("hello""world\n");
  const char* str = "hello""world\n";
  printf("%s",str);
  printf("PI:"STR(3.1415926535)"\n");
  char s[64] = {0};
  strcpy(s, TOSTRING(123456));
  printf("%s\n", s);
  printf("%lf\n", CONT(3.14, 4));
  return 0;
}