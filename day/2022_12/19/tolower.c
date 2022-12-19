/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  int i = 0;
  int len = 0;
  char arr[] = "I Am Very Happy";
  len = strlen(arr);
  for(i = 0;i < len;i++)
  {
    if(isupper(arr[i]))
    {
      arr[i] = tolower(arr[i]);
    }
  }
  printf("%s\n",arr);
  return 0;
}
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
  int i = 0;
  char arr[] = "Hello World";
  while(arr[i])
  {
    if(isupper(arr[i]))
    {
      arr[i] = tolower(arr[i]);
    }
    i++;
  }
  printf("%s\n",arr);
  return 0;
}
