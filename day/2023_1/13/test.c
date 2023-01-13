#include <stdio.h>

/* int main()
{
  while (1)
  {
    int ch = getchar();
    if (ch == '#')
    {
      break;
    }
    printf("%c", ch);
  }
  printf("while end... \n");
  return 0;
} */

/* int main()
{
  goto print;
  int i = 100;
  i = 200;
  printf("test\n");
print:
  printf("%d\n", i);
  return 0;
} */

/* int main()
{
  printf("void:%ld\n", sizeof(void));
  return 0;
} */

/* test(void)
{
  printf("hehe\n");
  return 1;
}

int main()
{
  int ret = 0;
  printf("%ld\n", sizeof(test()));
  ret = test();
  printf("%d\n", ret);
  return 0;
} */

int main()
{
  void *p = NULL;
  printf("%d\n", (int)p);
  p++;
  printf("%d\n", (int)p);
  return 0;
}