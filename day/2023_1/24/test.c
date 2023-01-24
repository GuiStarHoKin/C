#include <stdio.h>

// 实验证明：预处理阶段先去注释（去了BSC后的空注释），再宏替换
#define BSC //

int main()
{
  BSC printf("hello bit\n"); // 先宏替换再去注释的话，这句话就会看不到
  printf("you can see me\n");
  return 0;
}