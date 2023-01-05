#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
  //EOF #define EOF -1
  FILE *pf = fopen("EOF.txt", "r");
  if (pf == NULL)
  {
    printf("%s\n", strerror(errno));
    exit(0);
  }
  int ch = fgetc(pf);
  printf("%d\n", ch);//-1
  fclose(pf);
  pf = NULL;
  return 0;
}