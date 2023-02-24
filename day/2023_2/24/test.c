#include "SList.h"

void TestSList(void)
{
  SL *phead = NULL;
  int i = 0;
  printf("开始尾插...\n");
  for (i=1; i<=N; i++)
  {
    SLPushBack(&phead, i);
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