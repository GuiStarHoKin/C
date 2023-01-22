/* 1.设置指定比特位为1
   2.设置指定比特位为0
   3.显示int的所有比特位 */

#include <stdio.h>
#define SETBIT(X, N) ((X) |= (1<<(N-1)))
#define CLRBIT(X, N) ((X) &= (~(1<<(N-1))))

void ShowBits(int x)
{
  int num = 0; // bit位数
  num = sizeof(x) * 8;//byte*8bit
  while (num >= 1)//num==1 1-1==0不左移，检测最低一位
  {
    if (x & (1<<num-1)) //从最高位开始检验
    {
      printf("1 ");
    }
    else
    {
      printf("0 ");
    }
    num--;
  }
  printf("\n");
}

int main()
{
  int x = 0; // 待设置数字
  // 设置指定比特位为1
  //任何数字按位或上1都被设置成1
  printf("********开始设置为1********\n");
  SETBIT(x, 5);
  SETBIT(x, 4);
  SETBIT(x, 3);
  SETBIT(x, 2);
  SETBIT(x, 1);
  SETBIT(x, 32);
  //显示int的所有比特位
  ShowBits(x);
  printf("********开始设置为0********\n");
  CLRBIT(x, 5);
  CLRBIT(x, 4);
  CLRBIT(x, 3);
  CLRBIT(x, 2);
  CLRBIT(x, 1);
  CLRBIT(x, 32);
  ShowBits(x);
  return 0;
}