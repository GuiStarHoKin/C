#include "SeqList.h"

void SeqListInit(SL *sl)
{
  if (NULL == sl)
  {
    perror("SeqListInit()\n");
  }
  else
  {
    SLDataType *tmp = (SLDataType*)malloc(sizeof(SLDataType)*DEFAULT_SIZE);
    if (NULL == tmp)
    {
      perror("malloc()\n");
      exit(-1);
    }
    sl->a = tmp;
    tmp = NULL;
    sl->capacity = 4;
    sl->size = 0;

  }//end-if-else
}

void SeqListPushBack(SL *sl, int x)
{
  if (NULL == sl)
  {
    perror("SeqListPushBack()\n");
  }
  else
  {
    if (sl->capacity == sl->size)
    {
      SLDataType *tmp = (SLDataType*)realloc(sl->a, sizeof(SLDataType)*(sl->capacity*2));
      if (NULL == tmp)
      {
        perror("realloc()\n");
        exit(-1);
      }
      sl->a = tmp;
      tmp = NULL;
      sl->capacity *= 2;
    } //end-if

    sl->a[sl->size] = x;
    sl->size++;

  }

}

void SeqListPopBack(SL *sl)
{
  if (NULL == sl)
  {
    perror("SeqListPopBack()\n");
    exit(-1);
  }
  else
  {
    if (sl->size > 0)
    {
      sl->size--;
    }
  }//end-if-else
}

void SeqListPrint(SL *sl)
{
  if (NULL == sl)
  {
    perror("SeqListPrint()\n");
    exit(-1);
  }
  else
  {
    int i = 0;
    for (i=0; i<sl->size; i++)
    {
      printf("%d ", sl->a[i]);
    }
    printf("\n");
  } //end-if-else
}

void SeqListDestory(SL *sl)
{
  if (NULL == sl)
  {
    perror("SeqListDestory()\n");
    exit(-1);
  }
  else
  {
    free(sl->a);
    sl->a = NULL;
    sl->capacity = 0;
    sl->size = 0;
  }
}
