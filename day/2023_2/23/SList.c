#include "SList.h"

SLTNode* SLTNodeAlloc(int x)
{
  SLTNode *node = (SLTNode*)malloc(sizeof(SLTNode));
  if (NULL == node)
  {
    perror("Malloc()\n");
    exit(-1);
  }
  node->next = NULL;
  node->x = x;

  return node;
}

void SLTNodeInsert(SLTNode *phead, int x)
{
  if (NULL == phead)
  {
    printf("Error:NULL in SLTNodeInsert()\n");
    return;
  }
  SLTNode *node = SLTNodeAlloc(x);
  node->next = phead->next;
  phead->next = node;
}

void ShowNode(SLTNode *phead)
{
  if (NULL == phead)
  {
    printf("NULL In ShowNode()\n");
    return;
  }

  SLTNode *node = phead->next;
  while (node != NULL)
  {
    printf("%d->", node->x);
    node = node->next;
  }
  printf("NULL\n");
}

void SLTNodeDelete(SLTNode *phead)
{
  if (NULL == phead)
  {
    printf("NULL In SLTNodeDelete()\n");
    return;
  }

  SLTNode *cur = phead->next;
  phead->next = cur->next;
  free(cur);
  cur = NULL;
}