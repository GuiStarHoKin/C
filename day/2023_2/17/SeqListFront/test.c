#include "SeqListFront.h"

void TestSeqListFront(void)
{
  SL sl;
  SeqListInit(&sl);
  SeqListPushFront(&sl, 10);
  SeqListPushFront(&sl, 20);
  //SeqListPopFront(&sl);
  SeqListPrint(&sl);
  printf("下标为:%d\n", SeqListFind(&sl, 10));
  SeqListInsert(&sl, 2, 30);
  SeqListInsert(&sl, 1, 50);
  SeqListPrint(&sl);
  SeqListErase(&sl ,2);
  SeqListPrint(&sl);

  SeqListDestory(&sl);
}

int main()
{
  TestSeqListFront();
  system("pause");
  return 0;
}