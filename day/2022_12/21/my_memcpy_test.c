#include <stdio.h>
#include <assert.h>
#include <string.h>

struct s
{
  char name[10];
  int age;
};



void* my_memcpy(void* dest,const void* src,int num)
{
  assert(dest && src);
  void* start = dest;
  while(num--)
  {
    *(char*)dest = *(char*)src;
    (char*)dest++;
    (char*)src++;
  }
  return start;
}

int main()
{
  int i = 0;
  char arr1[] = {1,2,3,4,5};
  char arr2[5] = {0};
  struct s arr3[] = {{"张三",20},{"李四",30}};
  struct s arr4[2] = {0};
  char arr5[] = {1,2,3,4,5,6,7,8,9,10}; // 测试把12345拷贝到34567的位置
  my_memcpy(arr2,arr1,sizeof(arr1));
  my_memcpy(arr4,arr3,sizeof(arr3));
  //memcpy(arr5+2,arr5,20); //4*5==20字节 运行会发现库里的memcpy会出现问题,即自己把自己的内容覆盖了，memmove()处理内存重叠的情况
  //my_memcpy(arr5+2,arr5,20); // 会发现出现内存重叠，用memmove()可以解决问题
  //void* memmove(void* dest, const void* src, size_t count);
  //memmove(arr5+2,arr5,20);
  for(i = 0;i < 5;i++)
  {
    printf("%d ",arr2[i]);
  }
  printf("\n");
  for(i = 0;i < 2;i++)
  {
    printf("%s ",arr4[i].name);
    printf("%d\n",arr4[i].age);
  }
  for(i = 0;i < 10;i++)
  {
    printf("%d ",arr5[i]);
  }
  return 0;
}