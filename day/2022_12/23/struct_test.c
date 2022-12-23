#include <stdio.h>

struct stu
{
  char name[20];
  char tele[11];
  int age;

}s1={"张三","01234567890",20}; //全局变量

struct str
{
  char name[20];
  char tele[11];
  int age;
}* pst; // 结构体指针，用来存放结构体变量的地址

int main()
{
  pst = &s1;
  printf("结构体变量打印:%s %s %d\n",s1.name,s1.tele,s1.age);
  printf("结构体指针打印:%s %s %d\n",pst->name,pst->tele,pst->age);
  return 0;
}