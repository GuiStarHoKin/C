#include "LinkList.h"

void TestNode(void)
{
  int i = 0;
  Node_t *head = AllocNode(0);
  printf("插入测试...\n");
  for (i=1; i<=N; i++)
  {
    InsertNode(head, i);
    ShowNode(head);
    Sleep(500);
  }
  printf("删除测试...\n");
  for (i=1; i<=N; i++)
  {
    DeleteNode(head);
    ShowNode(head);
    Sleep(500);
  }
  DestoryNode(head);

}

int main()
{
  TestNode();
  system("pause");
  return 0;
}