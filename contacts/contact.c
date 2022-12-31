#include "contact.h"

void InitContact(struct Contact *ps)
{
  memset(ps->data, 0, sizeof (ps->data));
  ps->size = 0;//设置通讯录最初只有0个元素
}

void AddContact(struct Contact *ps)
{
  if (ps->size == MAX)
  {
    printf("通讯录已满，无法增加\n");
  }
  else
  {
    printf("请输入姓名:>");
    scanf("%s", ps->data[ps->size].name);
    printf("请输入年龄:>");
    scanf("%d", &(ps->data[ps->size].age));
    printf("请输入性别:>");
    scanf("%s", ps->data[ps->size].gender);
    printf("请输入电话:>");
    scanf("%s", ps->data[ps->size].tele);
    printf("请输入地址:>");
    scanf("%s", ps->data[ps->size].addr);

    ps->size++;
    printf("添加成功!\n");
  }
}

void ShowContact(const struct Contact *ps)
{
  if (ps->size == 0)
  {
    printf("通讯录为空\n");
  }
  else
  {
    int i = 0;
    printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
    for (i = 0; i < ps->size; i++)
    {
      printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
          ps->data[i].name,
          ps->data[i].age,
          ps->data[i].gender,
          ps->data[i].tele,
          ps->data[i].addr);
    }
  }
}

void DelContact(struct Contact *ps)
{
  char name[MAX_NAME];
  printf("请输入要删除人的名字:>");
  scanf("%s", name);
  //1.查找要删除的人在什么位置
  int i = 0;
  for (i = 0; i < ps->size; i++)
  {
    if (0 == (strcmp(ps->data[i].name,name)))
    {
      break;
    }
  }
  //2.删除
  if (i == ps->size)
  {
    printf("要删除的人不存在\n");
  }
  else
  {
    int j = 0;
    for (j = i; j < ps->size-1; j++)
    {
      ps->data[j] = ps->data[j+1];
    }
    ps->size--;
    printf("删除成功!\n");
  }

}