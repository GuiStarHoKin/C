#include "SList.h"

void TestSList(void)
{
  int i = 0;
  SL *phead = NULL;
  printf("开始尾插...\n");
  for (i=1; i<=N; i++)
  {
    
    SLPushBack(&phead, i);
    SLPrint(phead);
    Sleep(500);
  }
  SL *pos = SLFind(phead, 5);
  SLInsert(&phead, pos, 50);
  SLPrint(phead);
  SLInsertAfter(pos, 60);
  SLPrint(phead);
  SLErase(&phead, pos);
  SLPrint(phead);
  SLDestory(&phead);

  /* printf("开始尾删...\n");
  for (i=1; i<=N; i++)
  {
    SLPopBack(&phead);
    SLPrint(phead);
    Sleep(500);
  }
  printf("开始头插...\n");
  for (i=1; i<=N; i++)
  {
    SLPushFront(&phead, i);
    SLPrint(phead);
    Sleep(500);
  }
  printf("开始头删...\n");
  for (i=0; i<=N; i++)
  {
    SLPopFront(&phead);
    SLPrint(phead);
    Sleep(500);
  } */


}

int main()
{
  TestSList();
  system("pause");
  return 0;
}