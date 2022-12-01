#include <stdio.h>
#include <stdlib.h>

int main() // 临时变量法
{
    int a;
    int b;
    int temp;
    a = 3;
    b = 5;
    printf("before:\ta = %d b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("after:\ta = %d b = %d\n",a,b);
    system("pause");
    return 0;
}