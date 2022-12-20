#include <stdio.h>
#include <assert.h>
22:40
void* my_memcpy(void* dest, const void* src, size_t num)
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


struct s
{
  char name[10];
  int age;
};

int main()
{
  int i = 0;
  int arr1[] = {1,2,3,4,5};
  int arr2[5] = {0};
  struct s arr3[] = {{"张三",20},{"李四",30}};
  struct s arr4[2] = {0};
  my_memcpy(arr2,arr1,sizeof(arr1));
  my_memcpy(arr4,arr3,sizeof(arr3));
  for(i = 0;i < 5;i++)
  {
    printf("%d\n",arr2[i]);
  }
  for(i = 0;i < 2;i++)
  {
    printf("%s\n",arr4[i].name);
    printf("%d\n",arr4[i].age);
  }
  return 0;
}