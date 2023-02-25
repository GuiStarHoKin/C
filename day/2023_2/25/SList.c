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

void SLPopBack(SL **phead)
{
/*   if (NULL == *phead)
  {
    return;
  }
  else if (NULL == (*phead)->next)
  {
    free(*phead);
    (*phead) = NULL;
  }
  else
  {
    SL *tail = *phead;
    SL *prev = NULL;
    while (NULL != tail->next)
    {
      prev = tail;
      tail = tail->next;
    }
    free(tail);
    tail = NULL;
    prev->next = NULL;
  } */

    if (NULL == (*phead)->next)
    {
        free(*phead);
        *phead = NULL;
    }
    else
    {
        SL *tail = *phead;
        while (NULL != tail->next->next)
        {
            tail = tail->next;
        }
        free(tail->next);
        tail->next = NULL;
    }
}

void SLPopFront(SL **phead)
{
    if (NULL == *phead)
    {
        return;
    }
    else
    {
        SL *next = (*phead)->next;
        free(*phead);
        *phead = next;
    }
}

SL* SLFind(SL *phead, SLDataType x)
{
    SL *cur = phead;
    while (NULL != cur)
    {
        if (cur->data == x)
        {
            return cur;
        }
        else
        {
            cur = cur->next;
        }
    }
    
    return NULL;
}