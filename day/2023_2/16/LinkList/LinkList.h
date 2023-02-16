#ifndef __LINKLIST_H__
#define __LINKLIST_H__

#include <stdio.h>
#include <windows.h>

#define N 10

typedef int NodeDataType;


typedef struct Node
{
  NodeDataType data; // 数据域
  struct Node *next; // 指针域
}Node_t;

extern Node_t* AllocNode(int x);
extern void InsertNode(Node_t *head, int x);
extern void ShowNode(Node_t *head);
extern void DeleteNode(Node_t *head);
extern void DestoryNode(Node_t *head);

#endif