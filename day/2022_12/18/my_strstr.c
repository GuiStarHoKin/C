// char* strstr(const char* str, const char* strCharSet);
#include <stdio.h>
#include <assert.h>

char* my_strstr(const char* p1, const char* p2)
{
  assert(p1 && p2);
  char* s1 = (char*)p1; // 记住父串的开始位置
  char* s2 = (char*)p2; // 记住字串的开始位置
  char* cur = (char*)p1;
  if(*p2 == '\0') // 字串不能为空
  {
    return (char*)p1; 
  }
  while(*cur) // cur为可能匹配成功的指针变量
  {
    s1 = cur; // cur为可能成功的匹配
    s2 = (char*)p2; // s2每次需重新开始
    while((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
    {
      s1++;
      s2++;
    }
    if(*s2 == '\0')
    {
      return cur; // 找到子串
    }
    if(*s1 == '\0')
    {
      return NULL; // 优化（父串比子串短）
    }
    cur++;
  }
  return NULL; // 没有找到字串
}

int main()
{
  char* ret = NULL;
  const char* str1 = "abcdefghi"; // test1
  const char* str2 = "def";
  // const char* str1 = "abbbcdef"; // test2
  // const char* str2 = "bbc";
  // const char* str1 = "abc"; // test3
  // const char* str2 = "abcdef";
  ret = my_strstr(str1,str2);
  if(ret == NULL)
  {
    printf("找不到字串\n");
  }
  else
  {
    printf("找到了,字串为:%s\n",ret);
  }
  return 0;
}