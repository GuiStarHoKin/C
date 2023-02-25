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
  printf("开始尾删...\n");
  for (i=1; i<=N; i++)
  {
    
    SLPopBack(&plist);
    SLPrint(phead);
    Sleep(500);
  }
  SLDestory(&phead);
  printf("开始头插...\n");
  for (i=1; i<=N; i++)
  {
    SLPushFront(&phead, i);
    SLPrint(phead);
    Sleep(500);
  }


}

int main()
{
  TestSList();
  system("pause");
  return 0;
}