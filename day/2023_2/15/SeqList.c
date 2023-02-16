#include "SeqList.h"

void SeqListInit(SL *sl)
{
  sl->a = NULL;
  sl->capacity = 0;
  sl->size = 0;
}

void SeqListPushBack(SL *sl, int x)
{
    //如果没有空间或空间不足
    if (sl->capacity == sl->size)
    {
      int new_capacity = sl->capacity == 0 ? 4 : sl->capacity*2;
      SLDataType *tmp = (SLDataType*)realloc(sl->a, sizeof(SLDataType)*new_capacity);
      if (NULL == tmp)
      {
          perror("SeqListPushBack()\n");
          exit(-1);
      }
      sl->a = tmp;
      sl->capacity = new_capacity;
    }
    
    
    sl->a[sl->size] = x;
    sl->size++;

}

void SeqListPrint(const SL *sl)
{
  if (NULL == sl)
  {
    perror("SeqListPrint()\n");
  }
  else
  {
    int i = 0;
    for (i=0; i<sl->size; i++)
    {
       printf("%d ", sl->a[i]);
    }
    printf("\n");
  }
}

void SeqListDestory(SL *sl)
{
  free(sl->a);
  sl->a = NULL;
  sl->capacity = 0;
  sl->size = 0;
}

void SeqListPopBack(SL *sl)
{
  if (NULL == sl)
  {
    perror("SeqListPopBack()\n");
  }
  else
  {
    if (sl->size > 0)
    {
      sl->size--;
    }
  }
}