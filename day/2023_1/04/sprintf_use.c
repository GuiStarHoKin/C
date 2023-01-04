#include <stdio.h>

struct S
{
  int i;
  float score;
  char arr[10];
};

int main()
{
  struct S s = {100, 3.14f, "hello"};
  char buf[1024] = {0};
  struct S tmp = {0};
  // 把格式化的数据转换成字符串存储到buf
  sprintf(buf, "%d %.2f %s", s.i, s.score, s.arr);
  printf("%s\n", buf);
  // 从buf中读取格式化的数据到tmp中
  sscanf(buf, "%d %f %s", &(tmp.i), &(tmp.score), tmp.arr);
  printf("%d %.2f %s\n", tmp.i, tmp.score, tmp.arr);
  return 0;
}