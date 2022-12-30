#include <stdio.h>

// 枚举类型
enum Gender
{
  // 枚举的可能取值-常量
  MALE, // 0
  FEMALE, // 1
  SECRET // 2
};

enum Color
{
  RED = 2, // 赋初始值
  GREEN = 4,
  BLUE = 8
};

int main()
{
  enum Gender g = MALE;
  //err:无法从int到Color enum Color c = 8; 
  printf("%d %d %d\n", MALE, FEMALE, SECRET);
  printf("%d %d %d\n", RED, GREEN, BLUE);
  return 0;
}