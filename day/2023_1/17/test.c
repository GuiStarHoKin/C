#include <stdio.h>
#include <stdlib.h>

/* struct data
{
  int age;
  int arr[0];
};

int main()
{
  int i = 0;
  struct data *p = (struct data*)malloc(sizeof(struct data) + 10*sizeof(int));
  if (p != NULL)
  {
    p->age = 10;
    for (i=0; i<10; i++)
    {
      p->arr[i] = i;
    }

    for (i=0; i<10; i++)
    {
      printf("%d ", p->arr[i]);
    }
  }
  free(p);
  p = NULL;
  return 0;
} */

/* union un
{
  int a;
  char b;
  char c;
  char d;
  char e;
  char f;
  double fl;
};

int main()
{
  union un x;
  union un *p = &x;
  printf("%p\n", p);
  printf("%p\n", &(p->a));
  printf("%p\n", &(p->b));
  printf("%p\n", &(p->c));
  printf("%p\n", &(p->d));
  printf("%p\n", &(p->e));
  printf("%p\n", &(p->f));
  printf("%p\n", &(p->fl));
  printf("%ld\n", sizeof(x));
  return 0;
} */

union un
{
  int num;
  char n;
};

int main()
{
  union un x;
  x.num = 1;
  if (1 == x.n)
  {
    printf("小端\n");
  }
  else
  {
    printf("大端\n");
  }
  return 0;
}