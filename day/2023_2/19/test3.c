#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define MAX_NAME 10

int ComparInt(const void *e1, const void *e2)
{
  return ( *((int*)e1) - *((int*)e2) );
}

void Swap(void *buf1, void *buf2, int isize)
{
  int i = 0;
  for (i=0; i<isize; i++) // 逐字节交换
  {
    char tmp = 0;
    tmp = *(char*)buf1;
    *(char*)buf1 = *(char*)buf2;
    *(char*)buf2 = tmp;
    buf1++;
    buf2++;
  }
}

void BubbleSort(void *array, size_t len, size_t isize, int (*compar)(const void *e1, const void *e2))
{
  int i = 0;
  int j = 0;

  for (i=0; i<len-1; i++) // len个元素要比较len-1轮
  {
    for (j=0; j<len-1-i; j++) // 每轮比较完成后需要比较的元素个数-1
    {
      if ( compar( ((char*)array) + j*isize, ((char*)array) + (j+1)*isize ) > 0 ) 
      { // 如果首元素大于后一个元素就进入Swap函数进行交换
        Swap( ((char*)array) + j*isize, ((char*)array) + (j+1)*isize, isize );
      }
    }
  }
}

void TestInt(void)
{
  int i = 0;
  int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
  int sz = 0;
  sz = sizeof(arr) / sizeof(arr[0]);

  printf("排序前:>");
  for (i=0; i<sz; i++)
  {
    printf("%d ", arr[i]);
  }

  BubbleSort(arr, sz, sizeof(arr[0]), ComparInt);

  printf("\n排序后:>");
  for (i=0; i<sz; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}


typedef struct student
{
  char name[MAX_NAME];
  int id;
}student;

int ComparById(const void *e1, const void *e2)
{
  return ( ((student*)e1)->id, ((student*)e2)->id );
}

int ComparByName(const void *e1, const void *e2)
{
  return strcmp( ((student*)e1)->name, ((student*)e2)->name );
}

void TestStruct1(void)
{
  int i = 0;
  student stu[] = {{"bb", 01}, {"aa", 02}};
  int len = sizeof(stu) / sizeof(stu[0]);

  printf("按姓名排序前:>\n");
  printf("姓名\t学号\t\n");
  for (i=0; i<len; i++)
  {
    printf("%s\t%d\t\n", stu[i].name, stu[i].id);
  }
  
  BubbleSort(stu, len, sizeof(student), ComparByName);
  
  printf("按姓名排序后:>\n");
  printf("姓名\t学号\t\n");
  for (i=0; i<len; i++)
  {
    printf("%s\t%d\t\n", stu[i].name, stu[i].id);
  }
  printf("\n");
  
}

void TestStruct2(void)
{
  int i = 0;
  student stu[] = {{"bb", 01}, {"aa", 02}};
  int len = sizeof(stu) / sizeof(stu[0]);

  printf("按学号排序前:>\n");
  printf("姓名\t学号\t\n");
  for (i=0; i<len; i++)
  {
    printf("%s\t%d\t\n", stu[i].name, stu[i].id);
  }
  
  BubbleSort(stu, len, sizeof(student), ComparById);
  
  printf("按学号排序后:>\n");
  printf("姓名\t学号\t\n");
  for (i=0; i<len; i++)
  {
    printf("%s\t%d\t\n", stu[i].name, stu[i].id);
  }
  printf("\n");
}

int main()
{
  TestInt();
  TestStruct1();
  TestStruct2();
  system("pause");
  return 0;
}