#include <stdio.h>
#include <stdlib.h>
// 一级指针传参
void test(int *p)
{
    ;
}
void test2(int *arr)
{
    ;
}
void test3(int *p)
{

}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int a = 10;
    test1(&a);
    test2(arr);
    int *p = &a;
    test3(p);
}