#include <stdio.h>
#define PRINT(X) printf("the value of "#X" is %d\n",X);

int main()
{
  int a = 10;
  int b = 20;
  PRINT(a); // printf("the value of""a""is %d\n",a);
  PRINT(b);
  return 0;
}