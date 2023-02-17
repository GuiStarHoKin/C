#include "SeqListFront.h"

void SeqListInit(SL *ps)
{
  if (NULL == ps)
  {
    perror("SeqListInit()\n");
    exit(-1);
  }
  else
  {
    ps->a = NULL;
    ps->capacity = 0;
    ps->size = 0;
  }
}

void SeqListCheckCapacity(SL *ps)
{
  if (NULL == ps)
  {
    perror("SeqListCheckCapacity()\n");
    exit(-1);
  }
  else
  {
    //没容量或容量不足
    if (ps->capacity == ps->size)
    {
      int new_capacity = 0;
      new_capacity = ps->capacity ? ps->capacity*2:4;
      SLDataType *tmp = realloc(ps->a, sizeof(SLDataType)*new_capacity);
      if (NULL == tmp)
      {
        perror("realloc()\n");
      }
      else
      {
        ps->capacity = new_capacity;
        ps->a = tmp;
        tmp = NULL;
      }
   }
 }
}

void SeqListPushFront(SL *ps, SLDataType x)
{
  if (NULL == ps)
  {
    perror("SeqListPushFront()\n");
    exit(-1);
  }
  else
  {
    SeqListCheckCapacity(ps);
    int end = ps->size-1;//结束的下标
    while (end >= 0)
    {       
    ps->a[end+1]  = ps->a[end];
    end--;
    }
    ps->a[0] = x;
    ps->size++;
  }
}

void SeqListPrint(SL *ps)
{
  if (NULL == ps)
  {
    perror("SeqListPrint()\n");
    exit(-1);
  }

  int i = 0;

  for (i=0; i<ps->size; i++)
  {
    printf("%d ", ps->a[i]);
  }
  printf("\n");
}

void SeqListDestory(SL *ps)
{
  if (NULL == ps)
  {
    perror("SeqListDestory()\n");
    exit(-1);
  }

  free(ps->a);
  ps->a = NULL;
  ps->capacity = 0;
  ps->size = 0;
}

void SeqListPopFront(SL *ps)
{
  if (NULL == ps)
  {
    perror("SeqListPopFront()\n");
    exit(-1);
  }
  if (ps->size > 0)
  {
    int begin = 1;
    while (begin < ps->size)
    {
      ps->a[begin-1] = ps->a[begin];
      begin++;
    }
    ps->size--;
  }
}


static int MyCmp(const SL *ps, SLDataType x)
{
  if (NULL == ps)
  {
    perror("MyCmp()\n");
    exit(-1);
  }

  int i = 0;

  for (i=0; i<ps->size; i++)
  {
    if ((ps->a[i]) == x)
    {
      return i;//找到了
    }
  }
  return -1;//没找到
}

int SeqListFind(SL *ps, SLDataType x)
{
  if (NULL == ps)
  {
    perror("SeqListFind()\n");
    exit(-1);
  }

  int i  = 0;
  int ret = MyCmp(ps, x);
  if (ret >= 0)
  {
    return ret ; // 找到了
  }
  
  return -1;
}//end-function

void SeqListInsert(SL *ps, int pos, SLDataType x)
{
  if (NULL == ps)
  {
    perror("SeqListInsert()\n");
    exit(-1);
  }

  int begin = 0;

  //挪动元素
  for (begin=ps->size-1; begin>=pos-1; begin--)
  {
    SeqListCheckCapacity(ps);
    ps->a[begin+1] = ps->a[begin];
  }

  //开始插入
  SeqListCheckCapacity(ps);
  ps->a[pos-1] = x; // pos-1->用户和我们的理解有差别
  ps->size++;

}

void SeqListErase(SL *ps, int pos)
{
  if (NULL == ps)
  {
    perror("SeqListErase()\n");
    exit(-1);
  }

  if (ps->size > 0)
  {
    int begin = pos-1;//用户理解和程序员理解有差别
    int i = 0;

    for (i=begin; i<ps->size-1; i++)
    {
      ps->a[i] = ps->a[i+1];
    }
    ps->size--;
  }
}