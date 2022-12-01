#include <stdio.h>
#include <stdlib.h>
// 二级指针传参
void test(int** p)
{
;
}

int main()
{
    int a = 10;
    int *p = &a;
    int **pp = &p;
    test(&p);
    test(pp);
    system("pause");
    return 0;
}