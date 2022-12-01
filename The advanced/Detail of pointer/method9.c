#include <stdio.h>
#include <stdlib.h>
// 二维数组传参
void test(int arr[3][5])
{
    ;
}

void test_1(int arr[][5])
{
    ;
}

void test2(int (*arr)[5])
{
    ;
}
int main()
{
    int arr[3][5] = {0};
    test(arr);
    test2(arr);
    system("pause");
    return 0;
}