#include <stdio.h>

struct t
{
  double weight;
};

struct s
{
  int age;
  struct t st;
};

int main()
{
  struct s S1 = {20,{3.14}};
  printf("%d %lf\n",S1.age,S1.st.weight);
  return 0;
}