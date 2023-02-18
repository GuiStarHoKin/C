#include <stdio.h>
#include <windows.h>

int main()
{
  char arr[3][4] = {{"abc"}, {"bac"}, {"cab"}};
  int sz = sizeof(arr) / sizeof(arr[0]);
  int i = 0;
  
  for (i=0; i<sz; i++)
  {
    printf("%s ", arr[i]);
  }
  printf("%d\n",sizeof(char[4]));
  system("pause");
  return 0;
}