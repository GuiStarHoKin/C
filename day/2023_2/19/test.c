#include <stdio.h> // printf scanf
#include <windows.h> // system("pause")
#include <stdlib.h> // malloc exit() qsort

#define MAX_NAME 10
#define MAX_ID 20

typedef struct student
{
  char name[MAX_NAME];
  int EnglishScore;
  int ChineseScore;
  int MathScore;
  char id[MAX_ID];
}student;

enum Option
{
  EXIT,
  ById,
  ByName,
  ByScore
};

void ScanfInfo(student *stu, int n)
{
  int i = 0;

  if (NULL == stu)
  {
    perror("ScanfInfo()\n");
    exit(-1);
  }

  for (i=0; i<n; i++)
  {
    printf("请输入姓名:>");
    scanf("%s", stu[i].name);
    printf("请输入学号:>");
    scanf("%s", stu[i].id);
    printf("请输入语文成绩:>");
    scanf("%d", &(stu[i].ChineseScore));
    printf("请输入数学成绩:>");
    scanf("%d", &(stu[i].MathScore));
    printf("请输入英语成绩:>");
    scanf("%d", &(stu[i].EnglishScore));
    printf("保存成功!\n");
  }
}

int CompareById(const void *e1, const void *e2)
{
  return (((student*)e1)->id - ((student*)e2)->id);
}

void QsortById(student *stu, int n)
{
  qsort(stu, n, sizeof(stu->id), CompareById);
}

int CompareByName(const void *e1, const void *e2)
{
  return (((student*)e1)->name - ((student*)e2)->name);
}


void QsortByName(student *stu, int n)
{
  qsort(stu, n, sizeof(stu->name), CompareByName);
}

int CompareByScore(const void *e1, const void *e2)
{
  int sume1 = 0;
  int sume2 = 0;
  sume1 = ((student*)e1)->ChineseScore + ((student*)e1)->EnglishScore + ((student*)e1)->MathScore;
  sume2 = ((student*)e2)->ChineseScore + ((student*)e2)->EnglishScore + ((student*)e2)->MathScore;
  return (sume1 - sume2);
}

void QsortByScore(student *stu, int n)
{
  qsort(stu, n, sizeof(int), CompareByScore);
}

void menu(void)
{
  printf("********1.按学号进行排序********\n");
  printf("********2.按姓名进行排序********\n");
  printf("********3.按总成绩进行排序******\n");
  printf("********0.     退出    ********\n");
}

static void DestoryStu(student *stu)
{
  if (NULL == stu)
  {
    perror("DestoryStu()\n");
    exit(-1);
  }

  free(stu);
  stu = NULL;
}

void Print(student *stu, int n)
{
  int i = 0;
  int sum = 0;
  printf("排序完成!\n");
  for (i=0; i<n; i++)
  {
    sum = stu[i].ChineseScore + stu[i].EnglishScore + stu[i].MathScore;
    printf("学号\t姓名\t语文\t数学\t英语\t总分\t\n");
    printf("%s\t%s\t%d\t%d\t%d\t%d\t\t\n", \
    stu[i].id, \
    stu[i].name, \
    stu[i].ChineseScore, \
    stu[i].MathScore,\
    stu[i].EnglishScore,\
    sum);
  }
}

int main()
{
  int i = 0;
  int n = 0;
  int input = 0;
  student *stu;

  printf("请输入要添加信息的学生数:>");
  scanf("%d", &n);
  student *tmp = (student*)malloc(sizeof(student)*n);
  if (NULL == tmp)
  {
    perror("malloc()\n");
    exit(-1);
  }
  stu = tmp;
  tmp = NULL;
  ScanfInfo(stu, n); // 逐个添加学生信息
  
  do
  {
    printf("请输入所需的排序方式:>\n");
    menu(); // 打印选项
    scanf("%d", &input);
    switch(input)
    {
      case EXIT:
        DestoryStu(stu);
        printf("退出成功!\n");
        break;
      case ById:
        QsortById(stu, n);
        Print(stu, n);
        break;
      case ByName:
        QsortByName(stu, n);
        Print(stu, n);
        break;
      case ByScore:
        QsortByScore(stu, n);
        Print(stu, n);
        break;
      default:
        printf("输入有误,请重新输入!");
        break;
    }
  }while (input);

  system("pause");
  return 0;
}