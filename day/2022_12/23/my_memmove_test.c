#include <stdio.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t num)
{
  assert(dest && src);
  void* start = dest;
  char* dest_ = (char*)dest;
  char* src_ = (char*)src;
  if(dest_ < src_)
  {
    //前->后
    while(num--)
    {
      *dest_ = *src_;
      dest_++;
      src_++;
    }
  }
  else
  {
    //后->前
    while(num--)
    {
      *(dest_ + num) = *(src_ + num);
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
  printf("\n");
  return 0;
}