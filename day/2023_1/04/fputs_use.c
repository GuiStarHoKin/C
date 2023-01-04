#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

int main()
{
  FILE *pf = fopen("test2.txt", "w");
  if (pf == NULL)
  {
    printf("%s\n", strerror(errno));
    exit(0);
  }
  fputs("hello\n", pf);
  fputs("world", pf);
  fclose(pf);
  pf = NULL;
  return 0;
}