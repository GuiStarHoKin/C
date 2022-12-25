#include <stdio.h>
/*结构体的自引用
struct Node
{
  int data; // 数据域
  struct Node* next; // 指针域
};
*/

typedef struct Node
{
  int data;
  struct Node* next; // 为避免先有鸡还是先有蛋的问题，不建议省略struct 后的Node，即不建议使用匿名结构体
}Node;
int main()
{
  struct Node N1;
  Node N2;
  return 0;
}
40:09