#include "LinkList.h"

Node_t* AllocNode(int x)
{
  Node_t *node =(Node_t *)malloc(sizeof(Node_t));
  if (NULL == node)
  {
    perror("AllocNode()\n");
    exit(-1);
  }
  node->data = x;
  node->next = NULL;
  return node;
}

void InsertNode(Node_t *head, int x)
{
  if (NULL == head)
  {
    perror("InsertNode()\n");
    exit(-1);
  }
  else
  {
    Node_t *node = AllocNode(x);
    node->next = head->next;
    head->next = node;
  }
}

void ShowNode(Node_t *head)
{
  if (NULL == head)
  {
    perror("ShowNode()\n");
    exit(-1);
  }
  else
  {
    Node_t *p = head->next;
    
    while (p)
    {
      printf("%d->", p->data);
      p = p->next;
    }
    printf("NULL\n");
  }
}

void DeleteNode(Node_t *head)
{
  if (NULL == head)
  {
    perror("DeleteNode()\n");
    exit(-1);
  }
  else
  {
    Node_t *p = head->next;
    head->next = p->next;
    free(p);
    p = NULL;
  }
}

void DestoryNode(Node_t *head)
{
  free(head);
  head = NULL;
}