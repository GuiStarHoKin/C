#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
  FILE *pfwrite = fopen("test.txt", "w");
  if (pfwrite == NULL)
  {
    printf("%s\n", strerror(errno));
  }
  fputc('b', pfwrite);
  fputc('i', pfwrite);
  fputc('t', pfwrite);
  fclose(pfwrite);
  pfwrite = NULL;
  return 0;
}