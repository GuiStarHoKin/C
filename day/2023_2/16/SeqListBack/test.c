#include "SeqList.h"

void TestSeqList(void)
{
  SL sl;
  SeqListInit(&sl);
  SeqListPushBack(&sl, 1);
  SeqListPushBack(&sl, 2);
  SeqListPopBack(&sl);
  SeqListPrint(&sl);
  SeqListDestory(&sl);
}


int main()
{
  TestSeqList();
  system("pause");
  return 0;
}