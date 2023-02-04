/* 无论任何运算，目的都是要计算机进行计算的，而计算机中简单理解只有CPU有计算能力，但计算的数据在内存中，故，计算之前
   （无论任何运算）(逻辑运算/位运算)，都必须要将数据从内存中拿到cpu中，拿到cpu哪里呢，毫无疑问，拿到cpu寄存器中去
    而寄存器本身，随着计算机位数的不同，寄存器的位数也不同，一般，在32为平台下，寄存器的的位数是32位，
    可是，你的char类型数据，只有8比特位，读到寄存器中，只能填补低8位，那么高24位呢？
    就需要char进行"整型提升"。 */
#include <stdio.h>

int main()
{
  char c = 0;
  printf("%ld\n", sizeof(c));//1
  printf("%ld\n", sizeof(~c));//4
  printf("%ld\n", sizeof(c << 1));//4
  printf("%ld\n", sizeof(c >> 1));//4
  printf("%ld\n", sizeof(!c));//4
  printf("%ld\n", sizeof(c & 1));//4
  printf("%ld\n", sizeof(c | 1));//4
  printf("%ld\n", sizeof(c ^ 1));//4
  printf("%ld\n", sizeof(c && 1));//4
  printf("%ld\n", sizeof(c || 1));//4
  return 0;
}