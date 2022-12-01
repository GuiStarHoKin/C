#include <stdio.h>
#include <stdlib.h>

int main() // 加减法-可能会溢出
{
    int a;
    int b;
    a = 3;
    b = 5;
    printf("before:\ta = %d b = %d\n",a,b);
    a = a + b; // 全值
    b = a - b; // 全值-b->a
    a = a - b; // 全值-a->b
    printf("after:\ta = %d b = %d\n",a,b);
    system("pause");
    return 0;
}