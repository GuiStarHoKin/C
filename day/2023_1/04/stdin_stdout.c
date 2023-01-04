#include <stdio.h>

int main()
{
  int ch = fgetc(stdin);
  fputc(ch, stdout);
  return 0;
}