// void* memmove(void* dest, const void* src);
// p53 40:50
#include <stdio.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t count)
{
  assert(dest && src);
  void* start = dest;
  if(dest < src) // 地址比较与数据类型无关
  {
    //前->后
    while(count--) // dest在src的左边,从src的前->后分别拷贝到dest前->后,从前往后拷贝，每次拷贝一个字节 1在内存中 01 00 00 00
    {
      *(char*)dest = *(char*)src;
      char* dest = (char*)dest + 1; // 先把地址转换成char*后再对地址++
      char* src = (char*)src + 1;
    }
  }
  else
  {
    // 后->前
    // count == 20
    while(count--) // count == 19
    {
      // count==19 指向了src最后一个元素的最后一个字节，count==20 指向的是src最后一个元素的最后一个字节的末尾
      *((char*)dest + count) = *((char*)src + count); //1在内存中的布局，01 00 00 00
    }
  }
  return start;
}

int main()
{
  int i = 0;
  int arr1[] = {1,2,3,4,5,6,7,8,9,10};
  my_memmove(arr1+2,arr1,20);
  for(i = 0;i < 10;i++)
  {
    printf("%d ",arr1[i]);
  }
  return 0;
}