#include "contact.h"

void InitContact(Contact *ps)
{
  // #define MALLOC(num, type) (type*)malloc(num*sizeof(type))
  // ps->date = MALLOC(DEFAULT_SZ, PeoInfo);
  // 妙
  ps->date = (PeoInfo*)malloc(DEFAULT_SZ*sizeof(PeoInfo));
  if (ps->date == NULL)
  {
    printf("%s\n", strerror(errno));
  }// end "if(ps->date == NULL)"
  ps->capacity = DEFAULT_SZ;
  ps->size = 0;
  // 把文件中已经存放的通讯录中的信息加载到通讯录中
  LoadContact(ps);
}

//声明函数
static void CheckCapacity(Contact *ps);

void LoadContact(Contact *ps)
{
  PeoInfo tmp = {0};
  FILE *pfRead = fopen("Contact.dat", "rb");
  if (pfRead == NULL)
  {
    printf("LoadContact::%s\n", strerror(errno));
  }
  // 读取文件，放到通讯录中
  while (fread(&tmp,sizeof(PeoInfo), 1, pfRead)) // fread return the number of full items actually read
  {
    CheckCapacity(ps);
    ps->date[ps->size] = tmp;
    ps->size++;
  }
  fclose(pfRead);
  pfRead == NULL;
}

static void CheckCapacity(Contact *ps)
{
  if (ps->size == ps->capacity)
  {
    // 增容
    PeoInfo* ptr = (PeoInfo*)realloc(ps->date,(ps->capacity + 2)*sizeof(PeoInfo));
    if (ptr != NULL)
    {
      // 增容成功
      ps->date = ptr;
      ps->capacity += 2;
      printf("增容成功!\n");
    }
    else
    {
      printf("增容失败!\n");
    }// end "if (ptr != NULL)"
  }// end "if(ps->size == ps->capacity)"
}

void AddContact(Contact *ps)
{
  /*
  检查容量是否足够
  1.不足够，增容
  2.足够，啥也不干
  */
  CheckCapacity(ps);
  printf("请输入姓名:>");
  scanf("%s", ps->date[ps->size].name);
  printf("请输入性别:>");
  scanf("%s", ps->date[ps->size].gender);
  printf("请输入年龄:>");
  scanf("%d", &(ps->date[ps->size].age));
  printf("请输入电话:>");
  scanf("%s", ps->date[ps->size].tele);
  printf("请输入地址:>");
  scanf("%s", ps->date[ps->size].addr);

  ps->size++;
  printf("添加成功!\n");

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
      printf("%-12s\t%-12s\t%-12d\t%-12s\t%-12s\t\n", ps->date[i].name,
        ps->date[i].gender,
        ps->date[i].age,
        ps->date[i].tele,
        ps->date[i].addr);
    }// end "for(i=0; i<ps->size; i++)"
  }// end "if(ps->size == 0)"
}

static int FindByName(const Contact *ps, const char name[MAX_NAME])
{
  /*
  找到该人返回下标
  找不到返回-1
  */
  int i = 0;
  for (i=0; i<ps->size; i++)
  {
    if (0 == (strcmp(ps->date[i].name, name)))
    {
      return i;
    }
  }
  return -1;
}

void DelContact(Contact *ps)
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
    if (-1 == pos)
    {
      printf("姓名输入有误，请重新输入!\n");
    }
    else
    {
      int i = 0;
      for (i=pos; i<ps->size-1; i++)
      {
        ps->date[i] = ps->date[i+1];
      }

      ps->size--;
      printf("删除成功!\n");
    }
  }
}

void SearchContact(const Contact *ps)
{
  if (0 == ps->size)
  {
    printf("通讯录为空，无法查找!\n");
  }
  else
  {
    char name[MAX_NAME];
    printf("请输入要查找人的姓名:>");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if (-1 == pos)
    {
      printf("姓名输入有误，请重新输入！\n");
    }
    else
    {
      printf("%-12s\t%-12s\t%-12s\t%-12s\t%-12s\t\n", "姓名", "性别", "年龄", "电话", "地址");
      printf("%-12s\t%-12s\t%-12d\t%-12s\t%-12s\t\n", ps->date[pos].name,
        ps->date[pos].gender,
        ps->date[pos].age,
        ps->date[pos].tele,
        ps->date[pos].addr);
    }
  }
}

void ModifyContact(Contact *ps)
{
  if (0 == ps->size)
  {
    printf("通讯录为空，无法修改!\n");
  }
  else
  {
    char name[MAX_NAME];
    printf("请输入要修改的人的姓名:>");
    scanf("%s", name);
    int pos = FindByName(ps, name);
    if (-1 == pos)
    {
      printf("姓名输入有误，请重新输入!\n");
    }
    else
    {
      printf("********开始修改********\n");
      printf("请输入姓名:>");
      scanf("%s", ps->date[pos].name);
      printf("请输入性别:>");
      scanf("%s", ps->date[pos].gender);
      printf("请输入年龄:>");
      scanf("%d", &(ps->date[pos].age));
      printf("请输入电话:>");
      scanf("%s", ps->date[pos].tele);
      printf("请输入地址:>");
      scanf("%s", ps->date[pos].addr);

      printf("修改完成!\n");
    }
  }
}

void DestroyContact(Contact *ps)
{
  free(ps->date);
  ps->date = NULL;
}

void SaveContact(const Contact *ps)
{
  int i = 0;
  FILE *pfWrite = fopen("Contact.dat", "wb");
  if (pfWrite == NULL)
  {
    printf("SaveContact::%s\n", strerror(errno));
    return;
  }
  // 写通讯录中数据到文件中去
  for (i=0; i<ps->size; i++)
  {
    fwrite(&(ps->date[i]),sizeof(PeoInfo), 1, pfWrite);
  }
  printf("保存成功!\n");
  fclose(pfWrite);
  pfWrite = NULL;
}