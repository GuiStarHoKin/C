#ifndef __SEQLISTFRONT_H__
#define __SEQLISTFRONT_H__

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>


typedef int SLDataType;

typedef struct SeqList
{ 
  SLDataType *a;
  int size;
  int capacity;
}SL;

extern void SeqListInit(SL *ps);
extern void SeqListPushFront(SL *ps, SLDataType x);
extern void SeqListPopFront(SL *ps);
extern void SeqListPrint(SL *ps);
extern void SeqListDestory(SL *ps);
extern void SeqListCheckCapacity(SL *ps);
extern int SeqListFind(SL *ps, SLDataType x);
extern void SeqListInsert(SL *ps, int pos, SLDataType x);
extern void SeqListErase(SL *ps, int pos);

#endif