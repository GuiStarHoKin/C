#include "SList.h"

SL* CreatListNode(SLDataType x)
{
  SL *newnode = (SL*)malloc(sizeof(SL));
  if (NULL == newnode)
  {
    perror("malloc:SLPushFront\n");
    exit(-1);
  }
  newnode->data = x;
  newnode->next = NULL;

  return newnode;
}

void SLPushBack(SL **phead, SLDataType x)
{
  SL *newnode = CreatListNode(x);

  if (NULL == *phead)
  {
    *phead = newnode;
  }
  else
  {
    SL *tail = *phead;
    while (tail->next != NULL)
    {
      tail = tail->next;
    }
    tail->next = newnode;
  }
}

void SLPrint(SL *phead)
{
  if (NULL == phead)
  {
    printf("NULL in SLPrint()\n");
    return;
  }

  SL *cur = phead;
  while (NULL != cur)
  {
    printf("%d->", cur->data);
    cur = cur->next;
  }
  printf("NULL\n");
}



void SLPushFront(SL **phead, SLDataType x)
{
  SL *newnode = CreatListNode(x);
  if (NULL == *phead)
  {
    *phead = newnode;
  }
  else
  {
    newnode->next = *phead;
    *phead = newnode;
  }
}

void SLDestory(SL **phead)
{
  free(*phead);
  (*phead) = NULL;
}

void 