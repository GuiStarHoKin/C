#include <stdio.h>
#include <windows.h>

int MyAdd(int a, int b)
{
  int c = 0;
  c = a + b;
  return c;
}

int main()
{
  int x = 0xA;
  int y = 0xB;
  int z = 0; 
  z = MyAdd(x, y);
  
  printf("z = %d\n", z);
  system("pause");
  return 0;
}