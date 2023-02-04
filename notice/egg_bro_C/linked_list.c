//蛋哥C语言 260 08:23
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <assert.h>

#define N 10

typedef struct Node
{
  int data; //数据域
  struct Node *next; //指针域
}Node_t;

Node_t* AllocNode(int x)
{
  Node_t *node = (Node_t*) malloc(sizeof(Node_t));
  if (NULL == node)
  {
    perror("malloc");
  }
  node->data = x; //初始化结点
  node->next = NULL;
  return node; //返回node结点（指针变量）指向的堆空间
}

void InsertNode(Node_t *head, int x)
{
  assert(head != NULL);
  Node_t *node = AllocNode(x);
  node->next = head->next;
  head->next = node;
}

void ShowList(Node_t *head)
{
  assert(head != NULL);
  Node_t *p = head->next;
  while (p)
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
  Node_t *head = AllocNode(0); //申请结点
  printf("插入测试...\n");
  for (i=1; i<=N; i++)
  {
    InsertNode(head, i); //头插
    ShowList(head);
    Sleep(1000);
  }
  printf("删除测试...\n");
  for (i=1; i<=N; i++)
  {
    DeleteNode(head); //头删
    ShowList(head);
    Sleep(1000);
  }
  free(head);
  head = NULL;
  system("pause");
  return 0;
}