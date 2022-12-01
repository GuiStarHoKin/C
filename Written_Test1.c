#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    int i;
    for(i = 0,k = 0;k = 0;k++,i++) // 循环执行0次，因为表达式1执行完后，执行表达式2，但是表达式2不是判断语句
    {                              // 是赋值语句，把0赋值给了k，0为假，所以把假赋值给k，所以表达式2为假，不执行循环语句
        k++;                       // 若赋值非0(-1)则为死循环
        printf("!");
    }
    system("pause");
    return 0;
}