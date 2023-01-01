//void* calloc(size_t num, size_t size);
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
  int *p = calloc(10, sizeof(int));
  if (p == NULL)
  {
    printf("%s\n", strerror(errno));
  }
  else
  {
    int i = 0;
    for(i=0; i<10; i++)
    {
      printf("%d ", *(p + i));
    }
  }
  printf("\n");
  free(p);
  p = NULL;
  return 0;
}