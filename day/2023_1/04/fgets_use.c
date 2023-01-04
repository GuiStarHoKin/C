// char* fgets(char *string, int n, FILE *stream);
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

int main()
{
  char buf[1024] = {0};
  FILE *p = fopen("test.txt", "r");
  if (p == NULL)
  {
    printf("%s\n", strerror(errno));
    exit(0);
  }
  fgets(buf, 1024, p);
  printf("%s", buf);
  fgets(buf, 1024, p);
  printf("%s\n", buf);
  fclose(p);
  p = NULL;
  return 0;
}