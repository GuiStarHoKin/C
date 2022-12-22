#include <stdio.h>
#include <assert.h>

struct s
{
  char name[10];
  int age;
};


void* my_memcpy(void* dest, const void* src,size_t num)
{
  assert(dest && src);
  void* start = dest;
  char* dest_ = (char*)dest;
  char* src_ = (char*)src;
  while(num--)
  {
    *dest_ = *src_;
    dest_++;
    src_++;
  }
  return start;
}

int main()
{
  int i = 0;
  int arr1[] = {1,2,3,4,5,6,7,8,9,10};
  int arr2[10] = {0};
  struct s arr3[] = {{"张三",20},{"李四",30}};
  struct s arr4[2] = {0};
  my_memcpy(arr2,arr1,sizeof(arr1)); // 把arr1拷贝到arr2
  my_memcpy(arr4,arr3,sizeof(arr3)); // 把arr3拷贝放到arr4
  for(i = 0;i < 10;i++)
  {
    printf("%d ",arr2[i]);
  }
  printf("\n");
  for(i = 0 ;i < 2;i++)
  {
    printf("%s ",arr4[i].name);
    printf("%d\n",arr4[i].age);
  }
  return 0;
}