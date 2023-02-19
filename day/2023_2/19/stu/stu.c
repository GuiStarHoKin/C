#include "stu.h"

void StuInit(student **stu, int n)
{
  if (NULL == stu)
  {
    perror("StuInit()\n");
    exit(-1);
  }
  
  student *tmp = (student*)malloc(sizeof(student)*n);
  if (NULL == tmp)
  {
    perror("malloc()\n");
    exit(-1);
  }
  *stu = tmp;
  tmp = NULL;
  memset(*stu, 0, sizeof(student)*n);
}

void StuDestory(student *stu)
{
  free(stu);
  stu = NULL;
}

void StuScanf(student **stu, int n)
{
  int i = 0;
  for (i=0; i<n; i++)
  {
    int sum = 0;

    printf("请输入姓名:>");
    scanf("%s", (*stu)[i].name); // 二级指针变量先解引用为一级指针变量再进行操作!
    printf("请输入学号:>");
    scanf("%s", (*stu)[i].id);
    printf("请输入语文成绩:>");
    scanf("%d", &((*stu)[i].ChineseScore));
    printf("请输入数学成绩:>");
    scanf("%d", &((*stu)[i].MathScore));
    printf("请输入英语成绩:>");
    scanf("%d", &((*stu)[i].EnglishScore));
    
    sum = ((*stu)[i].ChineseScore + (*stu)[i].MathScore + (*stu)[i].EnglishScore);
    (*stu)[i].sum = sum;
    printf("保存成功!\n");
  }
}

static int SortByName(const void *e1, const void *e2)
{
  return (*(((student*)e1)->name) - *(((student*)e2)->name));
}

void QsortByName(student **stu, int n)
{
  if (NULL == stu)
  {
    perror("QsortByName()\n");
    exit(-1);
  }

  qsort((*stu), n, sizeof(student), SortByName);
}

void Print(student **stu, int n)
{
  int i = 0;

  printf("排序完成!\n");
  for (i=0; i<n; i++)
  {
    printf("姓名\t学号\t语文\t数学\t英语\t总分\t\n");
    printf("%s\t%s\t%d\t%d\t%d\t%d\t\n", (*stu)[i].name,\
    (*stu)[i].id,\
    (*stu)[i].ChineseScore,\
    (*stu)[i].MathScore,\
    (*stu)[i].EnglishScore,\
    (*stu)[i].sum);
  }
}

static int SortById(const void *e1, const void *e2)
{
  return (*(((student*)e1)->id) - *(((student*)e2)->id));
}

void QsortById(student **stu, int n)
{
  qsort((*stu), n, sizeof(student), SortById);
}

static int SortByScore(const void *e1, const void *e2)
{
  //return ((*((student*)e1)).sum - (*((student*)e2)).sum);
  return ((((student*)e1)->sum) - (((student*)e2)->sum));
}

void QsortByScore(student **stu, int n)
{
  qsort((*stu), n, sizeof(student), SortByScore);
}