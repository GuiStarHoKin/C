#ifndef __SLIST_H__
#define __SLIST_H__

#include <stdio.h>
#include <windows.h>

#define N 10

typedef int SLTDataType;

typedef struct SLTNode
{
  SLTDataType x;
  struct SLTNode *next;
}SLTNode;

extern SLTNode* SLTNodeAlloc(SLTDataType x);
extern void SLTNodeInsert(SLTNode *phead, SLTDataType x);
extern void ShowNode(SLTNode *phead);
extern void SLTNodeDelete(SLTNode *phead);

#endif