#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#define DEFAULT_SIZE 4

typedef int SLDataType;

typedef struct SeqList
{
  SLDataType *a;
  int size;
  int capacity;
}SL;

extern void SeqListInit(SL *sl);
extern void SeqListPushBack(SL *sl, SLDataType x);
extern void SeqListPopBack(SL *sl);
extern void SeqListPrint(SL *sl);
extern void SeqListDestory(SL *sl);




#endif