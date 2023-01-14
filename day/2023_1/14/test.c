/* #include <stdio.h>

char* show()
{
  char str[] = "hello bit";
  return str;
}

int main()
{
  char *s = show();
  printf("%s\n", s);
  return 0;
} */

#include <stdio.h>

/* int main()
{
  const int a = 10;
  printf("before:%d\n", a);
  int *p =(int*)&a;
  *p = 20;
  printf("after:%d\n", a);
  return 0;
} */

int main()
{
  int i = 0;
  const int n = 10;
  int arr[n];
  for (i = 0; i<10; i++)
  {
    arr[i] = i;
  }
  for (i=0; i<10; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}