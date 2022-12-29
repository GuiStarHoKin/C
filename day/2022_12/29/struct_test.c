#include <stdio.h>


struct S
{
  int i;
  char c;
  double d;
};

void Init(struct S *tmp)
{
  tmp->i = 10;
  tmp->c = 'w';
  tmp->d = 3.14;
}

void Print1(struct S tmp)
{
  printf("%d %c %lf\n", tmp.i, tmp.c, tmp.d);
}

void Print2(const struct S *tmp)
{
  printf("%d %c %lf\n", tmp->i, tmp->c, tmp->d);
}

int main()
{
  struct S s = {0};
  //Init(s); // 值传递
  Init(&s);
  Print1(s);
  Print2(&s);// 结构体传参首选传址，怕不安全可以用const修饰指针
  /*
  s.i = 10;
  s.c = 'w';
  s.d = 3.14;
  */
  printf("%d %c %lf\n", s.i, s.c, s.d);
  return 0;
}