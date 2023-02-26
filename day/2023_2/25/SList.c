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

void SLInsert(SL **pphead, SL *pos, SLDataType x)
{
  SL *newnode = CreatListNode(x);
  if (*pphead == pos)
  {
    // 头插
    newnode->next = (*pphead);
    (*pphead) = newnode;
  }
  else
  {
    SL *pos_prev = *pphead;
    while (pos_prev->next != pos)
    {
      pos_prev = pos_prev->next;
    }
    newnode->next = pos;
    pos_prev->next = newnode;
  }
}

void SLInsertAfter(SL *pos, SLDataType x)
{
    SL *newnode = CreatListNode(x);
    SL *pos_after = pos->next;
    newnode->next = pos_after;
    pos->next = newnode;

}

void SLErase(SL **pphead, SL *pos)
{
    if ((*pphead) == pos)
    {
        free(*pphead);
        (*pphead) = NULL;
    }
    else
    {
        SL *pos_prev = *pphead;
        while (pos_prev->next != pos)
        {
            pos_prev = pos_prev->next;
        }
        pos_prev->next = pos->next;
        free(pos);
        pos = NULL;
    }
}