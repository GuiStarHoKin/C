#include <stdio.h>
#include <windows.h>

/* int My_Strlen(const char *str)
{
  if (*str == '\0')
  {
    return 0;
  }
  return 1 + My_Strlen(str+1);
} */

/* int My_Strlen(const char *str)
{
  while(*str)
  {
    return 1 + My_Strlen(str+1);
  }
  return 0;
} */

int My_Strlen(const char *str)
{
  if (str == NULL)
  {
    return -1;
  }
  else
  {
    return *str ? 1 + My_Strlen(str+1): 0;
  }
}

int main()
{
  const char *str = "hello world";
  int len = 0;

  len = My_Strlen(str);
  printf("len = %d\n", len);
  system("pause");
  return 0;
}