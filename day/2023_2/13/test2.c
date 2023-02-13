#include <stdio.h>
#include <windows.h>

int compare(const char *str1, const char *str2)
{
  return(*(char*)str1 - *(char*)str2);
}

int main()
{
  char str1[] = "b";
  char str2[] = "a";
  
  char *str[] = {*str1, *str2};

  printf("after:%s\n", *str);
  
  qsort(str, 2, sizeof(char*), compare);

  printf("before:%s\n", *str);
  system("pause");
  return 0;
}