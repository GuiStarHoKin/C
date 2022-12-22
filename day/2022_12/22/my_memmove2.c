#include <stdio.h>
#include <assert.h>
/*
void* my_memmove(void* dest, const void* src, size_t count)
{
  assert(dest && src);
  void* start = dest;
  char* dest_ = (char*)dest;
  char* src_ = (char*)src;
  if(dest_ < src_)
  {
    // 前->后
    while(count--)
    {
      *dest_ = *src_;
      dest_++;
      src_++;
    }
  }
  else
  {
    // 后->前
    while(count--)
    {
      *(dest_+count) = *(src_+count);
    }
  }
  return start;
}
*/

void* my_memmove(void* dest, const void* src, size_t count)
{
  assert(dest && src);
  void* start = dest;
  char* dest_ = (char*)dest;
  char* src_ = (char*)src;
  if(dest_ < src_ || src_ + count < dest_)
  {
    // 从前->后
    while(count--)
    {
      *dest_ = *src_;
      dest_++;
      src_++;
    }
  }
  else if(src_ < dest_ && dest_ < src_ + count)
  {
    // 从后->前
    while(count--)
    {
      *(dest_ + count) = *(src_ + count);
    }
  }
  /*
  else // 两种情况，可以不用else if
  {
    // 从后->前
    while(count--)
    {
      *(dest_ + count) = *(src_ + count);
    }
  }
  */
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