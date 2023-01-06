#include <stdio.h>

int main()
{
  int i = 0;
  FILE* pf = fopen("log.txt", "w");
  if (pf == NULL)
  {
    perror("Open File:");
    return 0;
  }
  for (i=0; i<10; i++)
  {
    fprintf(pf, "File:%s date:%s time:%s line:%d function:%s i=%d\n", __FILE__,
      __DATE__,
      __TIME__,
      __LINE__,
      __FUNCTION__,
      i);
  }
  fclose(pf);
  pf = NULL;
  return 0;
}