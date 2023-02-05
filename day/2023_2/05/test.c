#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <assert.h>

#define N 10

typedef struct Node
{
  int data;
  struct Node* next;
}Node_t;

Node_t* AllocNode(int x)
{
  Node_t *node = (Node_t*)malloc(sizeof(Node_t));
  node->data = x;
  node->next = NULL;
  return node;
}

Node_t* InsertNode(int x, Node_t* head)
{
  assert(head != NULL);
  Node_t *node = AllocNode(x);
  node->next = head->next;
  head->next = node;
}

void ShowNode(Node_t *head)
{
  assert(head != NULL);
  Node_t *p = head->next;
  while(p)
  {
    printf("%d->", p->data);
    p = p->next;
  }
  printf("NULL\n");
}

void DeleteNode(Node_t *head)
{
  assert(head != NULL);
  Node_t *p = head->next;
  head->next = p->next;
  free(p);
  p = NULL;
}

int main()
{
  int i = 1;
  Node_t * head = AllocNode(0);
  printf("插入结点...\n");
  for (i=1; i<=N; i++)
  {
    InsertNode(i, head);
    ShowNode(head);
    Sleep(1000);
  }
  printf("删除结点...\n");
  for (i=1; i<=N; i++)
  {
    DeleteNode(head);
    ShowNode(head);
    Sleep(1000);
  }
  free(head);
  head = NULL;
  system("pause");
  return 0;
}