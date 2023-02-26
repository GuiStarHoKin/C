#ifndef __SLIST_H__
#define __SLIST_H__

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#define N 10

typedef int SLDataType;

typedef struct SList
{
  SLDataType data;
  struct SList *next;
}SL;

extern void SLPushBack(SL **phead, SLDataType x);
extern void SLPrint(SL *phead);
extern void SLPushFront(SL **phead, SLDataType x);
extern SL* CreatListNode(SLDataType x);
extern void SLPopBack(SL **phead);
extern void SLPopFront(SL **phead);
extern SL* SLFind(SL *phead, SLDataType x);
extern void SLInsert(SL **pphead, SL *pos, SLDataType x);
extern void SLInsertAfter(SL *pos, SLDataType x);
extern void SLErase(SL **pphead, SL *pos);
extern void SLDestory(SL **phead);
#endif