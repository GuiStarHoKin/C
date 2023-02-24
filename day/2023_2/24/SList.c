#include "SList.h"

void SLPrint(SL *phead)
{
  SL *cur = phead;
  while (cur != NULL)
  {
    printf("%d->", cur->data);
    cur = cur->next;
  }
  printf("\n");
  
}

void SLPushBack(SL **phead, SLDataType x)
{
  // 先创建好新结点
  SL *newnode = (SL*)malloc(sizeof(SL));
  newnode->data = x;
  newnode->next = NULL;

  //如果链表为空
  if (NULL == *phead)
  {
    *phead = newnode; // 给创好的新结点它
  }
  else
  {
    // 找到尾结点
    SL *tail = *phead;
    while (tail->next != NULL)
    {
      tail = tail->next;
    }
    tail->next = newnode; // 把创好的新结点给它
  }
}