#include <stdio.h>
#include <assert.h>

char* my_strcpy(char *strDest, const char *strSrc)
{
  assert ((strDest != NULL) && (strSrc != NULL));
  char *address = strDest;
  while ((*strDest++ = *strSrc++) != '\0')
  {
    NULL;
  }
  return address;
}

int main()
{
  char arr1[] = "hello";
  char arr2[10] = {0};
  my_strcpy(arr2, arr1);
  printf("%s\n",arr2);
  return 0;
}