#include "contact.h"

void InitContact(struct Contact *ps)
{
  memset(ps->data, 0, sizeof(ps->data));
  ps->size = 0;
}

void AddContact(struct Contact *ps)
{
  if (ps->size == MAX)
  {
    printf("抱歉，通讯录已满，无法添加!\n");
  }
  else
  {
    printf("请输入姓名:>");
    scanf("%s", ps->data[ps->size].name);
    printf("请输入性别:>");
    scanf("%s", ps->data[ps->size].gender);
    printf("请输入地址:>");
    scanf("%s", ps->data[ps->size].addr);
    printf("请输入电话:>");
    scanf("%s", ps->data[ps->size].tele);
    printf("请输入年龄:>");
    scanf("%d", &(ps->data[ps->size].age));

    ps->size++;
    printf("添加成功!\n");
  }
}


void ShowContact(const struct Contact *ps)
{
  if (ps->size == 0)
  {
    printf("通讯录为空!\n");
  }
  else
  {
    int i = 0;
    printf("%-12s\t%-12s\t%-12s\t%-12s\t%-12s\t\n", "姓名", "性别", "地址", "电话", "年龄");
    for (i=0; i<ps->size; i++)
    {
      printf("%-12s\t%-12s\t%-12s\t%-12s\t%-12d\t\n",
      ps->data[i].name,
      ps->data[i].gender,
      ps->data[i].addr,
      ps->data[i].tele,
      ps->data[i].age);
    }
  }
}

static int FindByName(const struct Contact *ps, char name[MAX_NAME])
{
  int i = 0;
  for (i=0; i<ps->size; i++)
  {
    if (0 == strcmp(ps->data[i].name, name))
    {
      return i; // 找到了
    }
  }
  return -1;//找不到
}

void DelContact(struct Contact *ps)
{
  if (ps->size == 0)
  {
    printf("通讯录为空，无法删除!\n");
  }
  else
  {
    char name[MAX_NAME];
    printf("请输入要删除人的姓名:>");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if (pos == -1)
    {
      printf("此人不存在!\n");
    }
    else
    {
      int j = 0;
      for (j=pos; j<pos-1; j++)
      {
        ps->data[j] = ps->data[j+1];
      }
      ps->size--;
      printf("删除成功!\n");
      
    }
  }
}

void SearchContact(const struct Contact *ps)
{
  if (ps->size == 0)
  {
    printf("通讯录为空，无法查找!\n");
  }
  else
  {
    char name[MAX_NAME];
    printf("请输入要查找人的姓名:>");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if (pos == -1)
    {
      printf("此人不存在!\n");
    }
    else
    {
      printf("%-12s\t%-12s\t%-12s\t%-12s\t%-12s\t\n", "姓名", "性别", "地址", "电话", "年龄");
      printf("%-12s\t%-12s\t%-12s\t%-12s\t%-12d\t\n",
        ps->data[pos].name,
        ps->data[pos].gender,
        ps->data[pos].addr,
        ps->data[pos].tele,
        ps->data[pos].age);
    }
  }
}

void ModifyContact(struct Contact *ps)
{
  if (ps->size == 0)
  {
    printf("通讯录为空，无法进行修改!\n");
  }
  else
  {
    char name[MAX_NAME];
    printf("请输入要修改人的姓名信息:>");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if (pos == -1)
    {
      printf("该姓名不存在，请重新输入！\n");
    }
    else
    {
      printf("请输入要修改成的姓名:>");
      scanf("%s", ps->data[pos].name);
      printf("请输入要修改成的性别:>");
      scanf("%s", ps->data[pos].gender);
      printf("请输入要修改成的地址:>");
      scanf("%s", ps->data[pos].addr);
      printf("请输入要修改成的电话:>");
      scanf("%s", ps->data[pos].tele);
      printf("请输入要修改成的年龄:>");
      scanf("%d", &(ps->data[pos].age));

      printf("修改完成!\n");
    }
  }
}

