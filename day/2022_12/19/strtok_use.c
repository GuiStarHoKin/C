// char* strtok(char* str, const char* sep);
#include <stdio.h>
#include <string.h>

int main()
{
  char* ret = NULL;
  const char* str = "hokin.think@qq.com";
  const char* str2 = "127.0.0.1";
  const char* str3 = "123@.234@.345";
  const char* sep = ".@";
  const char* sep2 = ".";
  char buf[1024] = {0};
  char buf2[1024] = {0};
  char buf3[1024] = {0};
  strcpy(buf, str);
  strcpy(buf2, str2);
  strcpy(buf3,str3);
  for(ret = strtok(buf, sep);ret != NULL;ret = strtok(NULL,sep)) // test sep tip:不可用常量字符串，即const char*类型
  {
    printf("%s\n",ret);
  }
  printf("****************\n");
  for(ret = strtok(buf2,sep2);ret != NULL;ret = strtok(NULL,sep2)) // test sep2 tip:sep和sep2均可
  {
    printf("%s\n",ret);
  }
  printf("****************\n");
  for(ret = strtok(buf3,sep);ret != NULL;ret = strtok(NULL,sep)) // tip:123@.234 也可
  {
    printf("%s\n",ret);
  }
  return 0;

}