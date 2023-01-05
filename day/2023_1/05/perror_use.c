#include <stdio.h>

int main()
{
  FILE *pf = fopen("test2.txt", "r");
  if (pf == NULL)
  {
    perror("Hokin");
    return 0;
  }
  fclose(pf);
  pf = NULL;
  return 0;
}