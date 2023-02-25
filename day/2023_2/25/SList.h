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
extern void SLDestory(SL **phead);

#endif