#include "SList.h"

static void TestNode(void)
{
  SLTNode *phead = SLTNodeAlloc(0);
  SLTDataType i = 0;
  printf("开始插入...\n");
  for (i=1; i<=N; i++)
  {
    SLTNodeInsert(phead, i);
    ShowNode(phead);
    Sleep(500);
  }
  printf("开始删除...\n");
  for (i=1; i<=N; i++)
  {
    SLTNodeDelete(phead);
    ShowNode(phead);
    Sleep(500);
  }
  free(phead);
  phead = NULL;

}

int main()
{
  TestNode();
  system("pause");
  return 0;
}