// int strncmp(const char* str1, const char* str2, size_t count);
#include <stdio.h>
#include <assert.h>

int my_strncmp(const char* str1,const char* str2,int count)
{
  assert(str1 && str2);
  while(count--)
  {
    if(*str1 == *str2)
    {
      str1++;
      str2++;
    }
    else
    {
      return (int)(*str1-*str2);
    }
  }
}

int main()
{
  const char* str1 = "hello";
  const char* str2 = "world"; 
  printf("%d\n",my_strncmp(str1,str2,3));
  return 0;
}