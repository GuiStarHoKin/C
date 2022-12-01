#include <stdio.h>
#include <stdlib.h>
// 一维数组传参
void test(int arry[])
{
    ;
}
void test_1(int *arry)
{
    ;
}
void test2(int* arry[20])
{
    ;
}
void test_2(int* *arry)
{
    ;
}
int main()
{
    int arry[10] = {0};
    int* arry2[20] = {0};
    test(arry);
    test2(arry2);
    system("pause");
    return 0;
}