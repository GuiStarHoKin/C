#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#include <stdio.h>

#define N 100
typedef int SLDateType;

typedef struct SeqList
{
  SLDateType a[N];
  int size;
}SL;

extern void SeqListPushBack(SL *ps, SLDateType x);




#endif