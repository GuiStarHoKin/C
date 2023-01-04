#include <stdio.h>

int main()
{
  FILE *pfRead = fopen("test.txt", "r");
  printf("%c", fgetc(pfRead));
  printf("%c", fgetc(pfRead));
  printf("%c", fgetc(pfRead));
  printf("\n");
  fclose(pfRead);
  pfRead = NULL;
  return 0;
}