#include <stdio.h>

int main()
{
/*   int i = 0;
  int j = 0;
  char c[4][3] = {0};
  for (i=0; i<4; i++)
  {
    for (j=0; j<3; j++)
    {
      printf("&c[%d][%d]:%p\n", i, j, &c[i][j]);
    }
  } */

  int i = 0;
  int a[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {0, -1, -2}
  };
  int *p = (int*)a;
  for (i=0; i< 4*3; i++)
  {
    printf("%d\n", *(p++));
  }
  
  return 0;
}