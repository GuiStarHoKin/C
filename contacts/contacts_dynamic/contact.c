#include "contact.h"

void InitContact(struct Contact *ps)
{
  ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ*sizeof(struct PeoInfo));
  if (ps->data == NULL)
  {
    printf("%s\n", strerror(errno));
    return;
  }
  ps->capacity = DEFAULT_SZ;
  ps->size = 0;
}

static void CheckCapacity(struct Contact *ps)
{
  if (ps->size == ps->capacity) // 容量不足
  {
    // 增容
    struct PeoInfo* ptr =(struct PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
    if (ptr != NULL)
    {
      ps->data = ptr;
      ps->capacity += 2;
      printf("增容成功!\n");
    }
    else
    {
      printf("增容失败!\n");
   }
  }  
}

void AddContact(struct Contact *ps)
{
  /*
    检测当前通讯录的容量
    1.如果满了，就增加空间
    2.如果不满，啥事都不干
  */
  CheckCapacity(ps);
  // 增加数据
  printf("请输入姓名:>");
  scanf("%s", ps->data[ps->size].name);
  printf("请输入地址:>");
  scanf("%s", ps->data[ps->size].addr);
  printf("请输入电话:>");
  scanf("%s", ps->data[ps->size].tel);
  printf("请输入性别:>");
  scanf("%s", ps->data[ps->size].gender);
  printf("请输入年龄:>");
  scanf("%d", &(ps->data[ps->size].age));

  ps->size++;
  printf("添加成功!\n");
}

void DestroyContact(Contact *ps)
{
  free(ps->data);
  ps->data = NULL;
}

void ShowContact(const Contact *ps)
{
  if (ps->size == 0)
  {
    printf("通讯录为空!\n");
  }
  else
  {
    int i = 0;
    printf("%-12s\t%-12s\t%-12s\t%-12s\t%-12s\t\n", "姓名", "性别", "年龄", "电话", "地址");
    for (i=0; i<ps->size; i++)
    {
      printf("%-12s\t%-12s\t%-12d\t%-12s\t%-12s\t\n", ps->data[i].name,
      ps->data[i].gender,
      ps->data[i].age,
      ps->data[i].tel,
      ps->data[i].addr);
    }
  }
}

static int FindByName(const Contact *ps,const char name[MAX_NAME])
{
  int i = 0;
  for (i=0; i<ps->size; i++)
  {
    if (0 == strcmp(ps->data[i].name, name))
    {
      return i; // 找到了
    }
  }
  return -1; // 没有找到
}

void DelContact(Contact *ps)
{
  if (ps->size == 0)
  {
    printf("通讯录为空，无法进行删除!\n");
  }
  else
  {
    char name[MAX_NAME];
    printf("请输入要删除人的姓名:>");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if (pos == -1)
    {
      printf("姓名输入有误，请重新输入!\n");
    }
    else
    {
      int j = 0;
      for (j = pos; j<ps->size-1; j++)
      {
        ps->data[j] = ps->data[j+1];
      }
      ps->size--;
      printf("删除成功!\n");
    }
  }
}

void SearchContact(const Contact *ps)
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
      printf("名字输入错误，请重新输入!\n");
    }
    else
    {
      printf("%-12s\t%-12s\t%-12s\t%-12s\t%-12s\t\n", "姓名", "性别", "年龄", "电话", "地址");
      printf("%-12s\t%-12s\t%-12d\t%-12s\t%-12s\t\n", ps->data[pos].name,
        ps->data[pos].gender,
        ps->data[pos].age,
        ps->data[pos].tel,
        ps->data[pos].addr);
    }
  }
}

void ModifyContact(Contact *ps)
{
  if (ps->size == 0)
  {
    printf("通讯录为空，无法进行修改!\n");
  }
  else
  {
    char name[MAX_NAME];
    printf("请输入要修改人的姓名:>");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if (pos == -1)
    {
      printf("姓名输入有误，请重新输入!\n");
    }
    else
    {
      printf("请输入新的姓名:>");
      scanf("%s", ps->data[pos].name);
      printf("请输入新的性别:>");
      scanf("%s", ps->data[pos].gender);
      printf("请输入新的年龄:>");
      scanf("%d", &(ps->data[pos].age));
      printf("请输入新的电话:>");
      scanf("%s", ps->data[pos].tel);
      printf("请输入新的地址:>");
      scanf("%s", ps->data[pos].addr);

      printf("修改成功！\n");
    }
  }
}

static int SortByName(const void *e1, const void *e2)
{
  return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact *ps)
{
  if (NULL == ps)
  {
    perror("SortContact()\n");
    return;
  }
  else if (ps->size == 0)
  {
    printf("通讯录为空,无法排序!\n");
  }
  else
  {
    qsort(ps->data, ps->size, sizeof(PeoInfo), SortByName);
  
    printf("排序完成!\n");
    ShowContact(ps);
  }

}